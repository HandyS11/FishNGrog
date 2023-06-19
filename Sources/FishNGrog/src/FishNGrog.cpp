#ifdef QT_QML_DEBUG
#include <QtQuick>
#endif

#include <sailfishapp.h>
#include "fish.h"
#include "fishmodel.h"
#include "fishlist.h"
#include "stub.h"

FishModel* stub_fish(){
    FishModel * list = new FishModel;

    for (auto fish: Stub().loadFish()){
        list->append(new Fish(fish));
    }

    return list;
}

int main(int argc, char *argv[])
{
    // L'application doit être construite avant toute chose. On lui passe les arguments pour gérer les options
    QScopedPointer<QGuiApplication> app (SailfishApp::application(argc, argv));

    // On a besoin d'une vue pour injecter des choses dedans
    QScopedPointer<QQuickView> view(SailfishApp::createView());


    qmlRegisterType<Fish>("FishLib",1,0,"Fish");

    qmlRegisterType<FishModel>("FishLib",1,0,"FishModel");
    qmlRegisterUncreatableType<FishList>("FishLib",1,0,"FishList","Le métier crée les données, pas la vue");

    QScopedPointer<FishModel> fishModel(stub_fish());

    // On relie la vue au fichier QML
    view->setSource(QUrl::fromLocalFile("MasterPage.qml"));

    view->rootContext()->setContextProperty("fishModel", fishModel.data());

    // On rend la vue affichable
    view->show();

    // On donne la main au moteur événementiel
    return app->exec();
}
