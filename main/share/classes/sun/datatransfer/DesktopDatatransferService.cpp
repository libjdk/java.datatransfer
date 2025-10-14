#include <sun/datatransfer/DesktopDatatransferService.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Supplier = ::java::util::function::Supplier;

namespace sun {
	namespace datatransfer {

$MethodInfo _DesktopDatatransferService_MethodInfo_[] = {
	{"getDefaultUnicodeEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFlavorMap", "(Ljava/util/function/Supplier;)Ljava/awt/datatransfer/FlavorMap;", "(Ljava/util/function/Supplier<Ljava/awt/datatransfer/FlavorMap;>;)Ljava/awt/datatransfer/FlavorMap;", $PUBLIC | $ABSTRACT},
	{"getPlatformMappingsForFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet;", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getPlatformMappingsForNative", "(Ljava/lang/String;)Ljava/util/LinkedHashSet;", "(Ljava/lang/String;)Ljava/util/LinkedHashSet<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC | $ABSTRACT},
	{"invokeOnEventThread", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"isDesktopPresent", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"registerTextFlavorProperties", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DesktopDatatransferService_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.datatransfer.DesktopDatatransferService",
	nullptr,
	nullptr,
	nullptr,
	_DesktopDatatransferService_MethodInfo_
};

$Object* allocate$DesktopDatatransferService($Class* clazz) {
	return $of($alloc(DesktopDatatransferService));
}

$Class* DesktopDatatransferService::load$($String* name, bool initialize) {
	$loadClass(DesktopDatatransferService, name, initialize, &_DesktopDatatransferService_ClassInfo_, allocate$DesktopDatatransferService);
	return class$;
}

$Class* DesktopDatatransferService::class$ = nullptr;

	} // datatransfer
} // sun