/* USA LEVEL_04.REL:0x195528, 172-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 176 linked bytes; first differing word +0x1C.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { char pad[0x54]; float *value; } Obj;
extern unsigned int D_0020D138;
float func_195528(Obj *o) {
 float f=(float)(D_0020D138-(int)(o->value[0]*30.0f));
 if(f<0.0f) f=0.0f;
 return f-62.52000045776367f*(float)(int)(f/62.52000045776367f);
}
