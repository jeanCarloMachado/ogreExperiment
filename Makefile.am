noinst_HEADERS= System/Db/TableAbstract.h System/Db/TableRowAbstract.h System/BootstrapAbstract.h  System/Db/Database.h Application/Bootstrap.h Application/ErrorController.h System/Object/Util.h Application/ModelSolutions.h Application/ControllerSolution.h Application/HelperOrderResultByWeight.h Application/ModelProblem.h
 
bin_PROGRAMS= App
 App_CPPFLAGS= -I$(top_srcdir) -lsqlite3
 App_SOURCES= main.cpp   					System/ApplicationMgr.cpp System/Language.cpp System/DesignPattern/InterfaceListener.cpp System/DesignPattern/InterfacePolymorphic.cpp System/Router/CMDRouterMgr.cpp System/Router/RouterController.cpp System/Router/RouterInterface.cpp System/Router/RouterMgr.cpp System/Router/RouterView.cpp System/ControllerAbstract.cpp  System/Object/Util.cpp System/Db/TableAbstract.cpp System/CMDApplication.cpp System/Db/Database.cpp System/Db/TableRowAbstract.cpp 								Application/BaseController.cpp Application/MessageController.cpp Application/DefaultController.cpp  Application/ErrorController.cpp  Application/Bootstrap.cpp Application/ModelProblem.cpp Application/ModelProblems.cpp Application/ModelSolutions.cpp Application/ControllerSolution.cpp Application/HelperOrderResultByWeight.cpp

 
 App_CXXFLAGS= $(OGRE_CFLAGS) $(OIS_CFLAGS) -lsqlite3
 App_LDADD= $(OGRE_LIBS) $(OIS_LIBS) -lsqlite3
 
 EXTRA_DIST = bootstrap
 AUTOMAKE_OPTIONS = foreign