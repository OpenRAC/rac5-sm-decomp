/* LEVEL_10:0x0D8880 -- placement copy of FRONTEND_015308.c: posts a state change for a key: updates the pending entry when the transition is allowed, otherwise queues a new message. */
typedef struct Msg {
    int key;
    int state;
    int arg;
} Msg;

typedef struct Entry {
    int key;
    int state;
    int arg;
} Entry;

typedef struct Queue {
    char pad00[0x60];
    int head;
    int tail;
} Queue;

typedef struct Game {
    char pad00[0x150D4];
    Queue queue;
} Game;

extern Game *D_0023A7A8[1];
extern int D_0020F71C;
extern int D_0020F720;

extern void *memset(void *s, int c, unsigned int n);
extern void func_0D90C0(int state, int arg);
extern Entry *func_0D9468(Queue *q, unsigned int i);
extern int func_0D94A0(Queue *q, Msg *m);

int func_0D8880(int key, int state, int arg)
{
    Msg m;
    unsigned int i;
    int cur;
    Queue *q;

    memset(&m, 0, sizeof(m));
    m.key = key;
    m.state = state;
    m.arg = arg;
    if (key == D_0020F71C && state == D_0020F720) {
        func_0D90C0(state, arg);
        return 1;
    }
    q = &D_0023A7A8[0]->queue;
    if (q->head != q->tail) {
        for (i = 0; i < 8; i++) {
            if (func_0D9468(&D_0023A7A8[0]->queue, i) != 0 && key == func_0D9468(&D_0023A7A8[0]->queue, i)->key) {
                cur = func_0D9468(&D_0023A7A8[0]->queue, i)->state;
                if (cur == 0xA5F || cur == 0xA6A) {
                    return 0;
                }
                if ((unsigned int)(cur - 0xA61) < 2) {
                    return 0;
                }
                if (cur == 0xA34 || cur == 0xA37) {
                    return 0;
                }
                if ((cur == 0xA24 || cur == 0xA3B) && state != 0xA34 && state != 0xA37) {
                    return 0;
                }
                if ((cur == 0xA26 || cur == 0xA3D) && state != 0xA34 && state != 0xA24 && state != 0xA37 && state != 0xA3B) {
                    return 0;
                }
                func_0D9468(&D_0023A7A8[0]->queue, i)->state = state;
                func_0D9468(&D_0023A7A8[0]->queue, i)->arg = arg;
                return 1;
            }
        }
    }
    return func_0D94A0(&D_0023A7A8[0]->queue, &m);
}
