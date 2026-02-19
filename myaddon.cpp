#include <node.h>

namespace demo {
  using v8::FunctionCallbackInfo;
  using v8::Isolate;
  using v8::Local;
  using v8::Number;
  using v8::Object;
  using v8::Value;
  using v8::MaybeLocal;

  void Add(const FunctionCallbackInfo<Value>& args) {
    Isolate* isolate = args.GetIsolate();

    // Obtener el primer argumento y verificar que la operación es exitosa.
    MaybeLocal<Number> maybeFirst = args[0]->ToNumber(isolate->GetCurrentContext());
    if (maybeFirst.IsEmpty()) return; // Manejo de error, no continuar si falla.
    Local<Number> first = maybeFirst.ToLocalChecked();

    // Obtener el segundo argumento y verificar que la operación es exitosa.
    MaybeLocal<Number> maybeSecond = args[1]->ToNumber(isolate->GetCurrentContext());
    if (maybeSecond.IsEmpty()) return; // Manejo de error, no continuar si falla.
    Local<Number> second = maybeSecond.ToLocalChecked();

    // Sumar los dos números.
    double sum = first->Value() + second->Value();
    Local<Number> total = Number::New(isolate, sum);

    args.GetReturnValue().Set(total);
  }

  void Initialize(Local<Object> exports) {
    NODE_SET_METHOD(exports, "add", Add);
  }

  NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)
}  // namespace demo
