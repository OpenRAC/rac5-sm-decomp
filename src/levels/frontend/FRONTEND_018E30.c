/* FRONTEND:0x018E30 -- runs the screen setup helpers in order and applies the stored settings word and the current record field. */
typedef struct { char pad_00[0x3C]; void *field; } Cur;
struct Obj;

extern int D_00030424;
extern Cur *D_00027E9C;
extern void func_022938(struct Obj *p);
extern void func_0209E0(int a);
extern void func_020988(void);
extern int func_0211B0(int a);
extern int func_020E48(void *a0);

void func_018E30(struct Obj *p)
{
    func_022938(p);
    func_0209E0(0);
    func_020988();
    func_0211B0(D_00030424);
    func_020E48(D_00027E9C->field);
}
