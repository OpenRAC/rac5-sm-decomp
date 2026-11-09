/* LEVEL_22.REL:0x130C48: reviewed 172-byte candidate, held for ABI review.
 * Resets the object pointer to the global default, runs two helpers and
 * releases the non-null slots except the current one.
 * pinned C with gnu-ee-trial links 172/172 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It defines the function returning void with (pointer), but the accepted
 * caller LEVEL_22_0C41D8.c declares it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x40];
    void *arr[4];
    char pad1[0x5C];
    unsigned char b_ac;
    unsigned char b_ad;
} Sub;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad1[0x12];
    Sub *sub58;
} Obj;

extern Obj *D_001668A4;
extern char D_00186D40[];

void func_130BB0(Obj *p);
void func_12FE00(Obj *p, int b, int c);
void func_052DE0(void *a, int b);
void func_137350(void *e);

void func_130C48(Obj *p)
{
    Sub *s;
    unsigned int i;
    void *e;

    if (p == 0) {
        p = D_001668A4;
        if (p == 0) {
            return;
        }
    }
    s = p->sub58;
    func_130BB0(p);
    func_12FE00(p, p->b45, 6);
    s->b_ac = 3;
    func_052DE0(D_00186D40, 1);
    for (i = 0; i < 4; i++) {
        e = s->arr[i];
        if (s->b_ad != i) {
            if (e != 0) {
                func_137350(e);
            }
        }
    }
}
