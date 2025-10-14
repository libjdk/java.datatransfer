#include <java/awt/datatransfer/FlavorMap.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace java {
	namespace awt {
		namespace datatransfer {

$MethodInfo _FlavorMap_MethodInfo_[] = {
	{"getFlavorsForNatives", "([Ljava/lang/String;)Ljava/util/Map;", "([Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC | $ABSTRACT},
	{"getNativesForFlavors", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/util/Map;", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/util/Map<Ljava/awt/datatransfer/DataFlavor;Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FlavorMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.datatransfer.FlavorMap",
	nullptr,
	nullptr,
	nullptr,
	_FlavorMap_MethodInfo_
};

$Object* allocate$FlavorMap($Class* clazz) {
	return $of($alloc(FlavorMap));
}

$Class* FlavorMap::load$($String* name, bool initialize) {
	$loadClass(FlavorMap, name, initialize, &_FlavorMap_ClassInfo_, allocate$FlavorMap);
	return class$;
}

$Class* FlavorMap::class$ = nullptr;

		} // datatransfer
	} // awt
} // java