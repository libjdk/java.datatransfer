#include <java/awt/datatransfer/FlavorListener.h>

#include <java/awt/datatransfer/FlavorEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FlavorEvent = ::java::awt::datatransfer::FlavorEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace datatransfer {

$MethodInfo _FlavorListener_MethodInfo_[] = {
	{"flavorsChanged", "(Ljava/awt/datatransfer/FlavorEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FlavorListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.datatransfer.FlavorListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_FlavorListener_MethodInfo_
};

$Object* allocate$FlavorListener($Class* clazz) {
	return $of($alloc(FlavorListener));
}

$Class* FlavorListener::load$($String* name, bool initialize) {
	$loadClass(FlavorListener, name, initialize, &_FlavorListener_ClassInfo_, allocate$FlavorListener);
	return class$;
}

$Class* FlavorListener::class$ = nullptr;

		} // datatransfer
	} // awt
} // java