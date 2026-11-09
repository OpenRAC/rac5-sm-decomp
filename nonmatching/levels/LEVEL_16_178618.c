/* LEVEL_16.REL:0x178618: reviewed 228-byte candidate, held for ABI review.
 * Runs three small init loops over two slots and sets object state.
 * pinned C with gnu-ee-trial links 228/228 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_000CF0 returning void with (int, pointer, pointer), but the
 * accepted LEVEL_16_000CF0.c defines it returning void with (int, int, int).
 * It declares func_115560 returning void with (pointer), but the accepted
 * LEVEL_16_115560.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Sub {
    char pad0[0x1C];
    void *p1C;
    char pad1[0x2C - 0x20];
    int w2C;
} Sub;

typedef struct Obj {
    char pad0[0x45];
    unsigned char b45;
    char pad1[0x54 - 0x46];
    Sub *p54;
} Obj;

extern char D_00000F68[];
extern void func_116930(int);
extern void func_177928(Obj *);
extern int func_079388(void);
extern void func_079398(int);
extern void func_079328(int);
extern void func_000BF0(int);
extern void func_000CF0(int, char *, Obj *);
extern void func_115560(void *);
extern void func_115438(int, int, int, int);

void func_178618(Obj *obj)
{
    unsigned int i;
    Sub *s = obj->p54;
    for (i = 0; i < 2; i++)
        func_116930(i);
    func_177928(obj);
    s->w2C = func_079388();
    for (i = 0; i < 2; i++) {
        func_079398(i);
        func_079328(0);
    }
    func_079398(0);
    for (i = 0; i < 2; i++) {
        func_000BF0(i);
        func_000CF0(0, D_00000F68, obj);
    }
    obj->b45 = 2;
    func_115560(s->p1C);
    func_115438(1, 0, 0x5A, 0);
}
