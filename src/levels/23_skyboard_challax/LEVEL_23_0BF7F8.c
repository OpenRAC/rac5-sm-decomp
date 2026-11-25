/* LEVEL_23:0x0BF7F8 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_001D3F9C;
extern unsigned char D_001D3FB0;
extern void (*D_001D3FC4)(void);
extern Shared *D_001C73AC;

struct Obj;
extern void func_126DF0(struct Obj *p);
extern void func_124788(int value);
extern int func_124F88(int v);
extern int func_124B68(int a0, int a1);

void func_0BF7F8(struct Obj *o)
{
    func_126DF0(o);
    func_124788(0);
    func_124F88(D_001D3F9C);
    if (D_001D3FB0 != 0 && D_001D3FC4 != 0)
        D_001D3FC4();
    func_124B68(D_001C73AC->w1C6C, D_001C73AC->w3C);
}
