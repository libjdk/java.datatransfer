#include <java/awt/datatransfer/MimeTypeParseException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace datatransfer {

$FieldInfo _MimeTypeParseException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MimeTypeParseException, serialVersionUID)},
	{}
};

$MethodInfo _MimeTypeParseException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MimeTypeParseException::*)()>(&MimeTypeParseException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MimeTypeParseException::*)($String*)>(&MimeTypeParseException::init$))},
	{}
};

$ClassInfo _MimeTypeParseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.datatransfer.MimeTypeParseException",
	"java.lang.Exception",
	nullptr,
	_MimeTypeParseException_FieldInfo_,
	_MimeTypeParseException_MethodInfo_
};

$Object* allocate$MimeTypeParseException($Class* clazz) {
	return $of($alloc(MimeTypeParseException));
}

void MimeTypeParseException::init$() {
	$Exception::init$();
}

void MimeTypeParseException::init$($String* s) {
	$Exception::init$(s);
}

MimeTypeParseException::MimeTypeParseException() {
}

MimeTypeParseException::MimeTypeParseException(const MimeTypeParseException& e) {
}

MimeTypeParseException MimeTypeParseException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MimeTypeParseException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MimeTypeParseException::load$($String* name, bool initialize) {
	$loadClass(MimeTypeParseException, name, initialize, &_MimeTypeParseException_ClassInfo_, allocate$MimeTypeParseException);
	return class$;
}

$Class* MimeTypeParseException::class$ = nullptr;

		} // datatransfer
	} // awt
} // java