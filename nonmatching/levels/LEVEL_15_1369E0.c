/* USA LEVEL_15.REL:0x1369E0, 164-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 148 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { char pad[0x2C]; float value; char gap[0x108]; float active; char gap2[0xC]; float duration,step,elapsed,extra; } Global;
extern Global D_002F4F88;
extern void func_097898(unsigned int);
static __inline__ const float *maximum(const float *a,const float *b) {return *a>*b?a:b;}
void func_1369E0(float dt) {
 if(D_002F4F88.duration<=0.0f) D_002F4F88.extra=0.0f;
 D_002F4F88.duration=1.0f;D_002F4F88.step=0.1666666716337204f;D_002F4F88.elapsed=0.0f;
 if((unsigned char)(D_002F4F88.active<=0.0f)) {
  float f=D_002F4F88.value-dt,zero=0.0f;
  D_002F4F88.value=*maximum(&f,&zero);
  func_097898(90);
 }
}
