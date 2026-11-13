/* USA LEVEL_10.REL:0x08C210, 120-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 116 linked bytes; first differing word +0x24.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { char pad[4]; signed char kind; char pad2[3]; float *record; } Sub;
extern int func_088F40(float *);
int func_08C210(Sub *s,int n) {
    if(!s->record || s->kind==-1 || s->record[3]==0.0f) return 0;
    if(func_088F40(s->record)==0) return 1;
    return n!=0;
}
