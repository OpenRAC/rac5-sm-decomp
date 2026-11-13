/* USA LEVEL_15.REL:0x0F78F8, 128-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 120 linked bytes; first differing word +0x28.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { char pad[0x44168]; int selected; void *record; int timer; } Global;
typedef struct { char bytes[44]; } Entry;
extern Global D_002A8B58;
extern int D_0016EF70;
extern Entry D_0016F230[];
void func_0F78F8(void) {
 D_002A8B58.timer=1000000;
 if(D_0016EF70==15) D_002A8B58.selected=0;
 else if(D_0016EF70==21) D_002A8B58.selected=1;
 D_002A8B58.record=&D_0016F230[D_002A8B58.selected];
}
