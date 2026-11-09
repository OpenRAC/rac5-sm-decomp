/* LEVEL_01.REL:0x12B8A0: reviewed 100-byte candidate, held for ABI review.
 * Returns the cached value of one record, computing it once.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (pointer), but the accepted
 * caller LEVEL_01_12B090.c declares it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct R { char p0[0x68]; int a68; char p1[0xC]; int ready; int value; char p2[0x40]; char sub[1]; } R;
extern int func_110668(char *); extern void func_10F630(int, int);
int func_12B8A0(R *r){ int v; if (r == 0) return 0; if (r->ready) return r->value; v = func_110668(r->sub); func_10F630(13, r->a68); r->ready = 1; r->value = v; return v; }
