/* USA LEVEL_01.REL:0x1916C8, 140-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 144 linked bytes; first differing word +0x40.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { char pad[0x18]; void *handle; } State;
typedef struct { char pad[0x34]; float height; char pad2[0xD]; unsigned char kind; char pad3[0x12]; State *state; } Obj;
typedef struct { char pad[0x34]; float height; char pad2[0x2FC]; Obj *current; } Global;
extern Global D_00235140;
extern int func_135E28(void *);
int func_1916C8(Obj *o) {
    int found=0;
    if(o->state->handle) found=func_135E28(o->state->handle);
    if(D_00235140.current==o || found) {
        if(o->kind==1) return 1;
        if (!(D_00235140.height-o->height<0.5f)) return 0;
        return 1;
    }
    return 0;
}
