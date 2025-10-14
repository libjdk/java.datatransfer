#include <java/awt/datatransfer/UnsupportedFlavorException.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace datatransfer {

$FieldInfo _UnsupportedFlavorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedFlavorException, serialVersionUID)},
	{}
};

$MethodInfo _UnsupportedFlavorException_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/datatransfer/DataFlavor;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedFlavorException::*)($DataFlavor*)>(&UnsupportedFlavorException::init$))},
	{}
};

$ClassInfo _UnsupportedFlavorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.datatransfer.UnsupportedFlavorException",
	"java.lang.Exception",
	nullptr,
	_UnsupportedFlavorException_FieldInfo_,
	_UnsupportedFlavorException_MethodInfo_
};

$Object* allocate$UnsupportedFlavorException($Class* clazz) {
	return $of($alloc(UnsupportedFlavorException));
}

void UnsupportedFlavorException::init$($DataFlavor* flavor) {
	$Exception::init$((flavor != nullptr) ? $($nc(flavor)->getHumanPresentableName()) : ($String*)nullptr);
}

UnsupportedFlavorException::UnsupportedFlavorException() {
}

UnsupportedFlavorException::UnsupportedFlavorException(const UnsupportedFlavorException& e) {
}

UnsupportedFlavorException UnsupportedFlavorException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnsupportedFlavorException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnsupportedFlavorException::load$($String* name, bool initialize) {
	$loadClass(UnsupportedFlavorException, name, initialize, &_UnsupportedFlavorException_ClassInfo_, allocate$UnsupportedFlavorException);
	return class$;
}

$Class* UnsupportedFlavorException::class$ = nullptr;

		} // datatransfer
	} // awt
} // java