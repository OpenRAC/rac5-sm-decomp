/* LEVEL_01:0x031A70 -- dispatches an input event to an action call. */
typedef struct {
    unsigned char b0, b1, b2, b3;
} Bytes_t;

extern void func_07CD28(void *obj, int id, int a, int b, float f, float g);
extern int func_07CAB8(void *obj, int a);

void func_031A70(void *obj, int sel, Bytes_t s, int cur)
{
    switch (sel) {
    case 1:
        if (cur == s.b0)
            return;
        func_07CD28(obj, s.b0, 0, 1, 0.15f, 0.0f);
        break;
    case 3:
        func_07CD28(obj, s.b3, 0, 1, 0.15f, 0.0f);
        break;
    case 4:
        if (cur == s.b3) {
            if (func_07CAB8(obj, 0) == 0)
                return;
            func_07CD28(obj, s.b1, 0, 1, 0.15f, 0.0f);
        } else {
            if (cur == s.b1)
                return;
            func_07CD28(obj, s.b1, 0, 1, 0.15f, 0.0f);
        }
        break;
    case 5:
        func_07CD28(obj, s.b2, 0, 1, 0.15f, 0.0f);
        break;
    }
}
