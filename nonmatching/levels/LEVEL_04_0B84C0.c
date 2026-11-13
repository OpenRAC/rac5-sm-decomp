/* USA LEVEL_04.REL:0x0B84C0, 164-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 116 linked bytes; first differing word +0x4.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { unsigned int count; int intensity; char pad[24]; } Entry;
extern Entry D_00342218[];
void func_0B84C0(unsigned int index) {
 Entry *p=&D_00342218[index];
 if(p->count) --p->count;
 if(p->count==0 && p->intensity==0) return;
 if(p->count) p->intensity+=8;
 else p->intensity-=8;
 if(p->intensity>255) p->intensity=255;
 if(p->intensity<0) p->intensity=0;
}
