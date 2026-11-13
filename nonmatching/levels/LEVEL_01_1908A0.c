/* USA LEVEL_01.REL:0x1908A0, 88-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 84 linked bytes; first differing word +0x18.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
extern int func_01A490(int);
typedef struct { int a,b; } State;
typedef struct { char pad[0x54]; State *state; } Obj;
int func_1908A0(Obj *o) {
    State *s=o->state;
    int result;
    if (s->b == 0) return 1;
    result=0;
    if (func_01A490(s->b)) result=func_01A490(s->a)==0;
    return result;
}
