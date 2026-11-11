/* LEVEL_24:0x139198 -- placement copy of LEVEL_04_14FAC8.c: handles a queued event: adds a value to a capped counter or dispatches by kind. */
typedef struct { int kind; int val; int p; int pad; } Ev;
extern int D_001C4C2C;
#define CNT (*(unsigned *)(D_001C4C2C + 0x1C68))
extern void func_000300(int p);
extern void func_022EA0(int p, int a, int b, int c);

void func_139198(Ev *e)
{
    Ev m = *e;
    Ev *q = &m;
    if (q->p != 0) {
        switch (q->kind) {
        case 3:
            CNT += q->val;
            if (CNT > 0x5F5E0FF) CNT = 0x5F5E0FF;
        case 2:
            func_000300(q->p);
            break;
        case 4:
            func_022EA0(q->p, 1, -1, 1);
            break;
        }
    } else {
        CNT += q->val;
    }
}
