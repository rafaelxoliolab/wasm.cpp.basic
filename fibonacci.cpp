#include <emscripten.h>

extern "C" {
   int EMSCRIPTEN_KEEPALIVE fibonacci(int n) {
      if (n <= 1) {
         return n;
      } else {
         return fibonacci(n - 1) + fibonacci(n - 2);
      }
   }
}