#include <iostream>
#include <immintrin.h>
using namespace std;
int add_avx_int_128(int a, int b) {
  __m128i va = _mm_setzero_si128();
  __m128i vb = _mm_setzero_si128();
  va = _mm_insert_epi32(va, a, 0);
  vb = _mm_insert_epi32(vb, b, 0);
  __m128i vc = _mm_add_epi32(va, vb);
 int c = _mm_extract_epi32(vc, 0);
  return c;
}
int main()
{
    int a,b;cin>>a>>b;
    cout<<add_avx_int_128(a,b)<<endl;
}