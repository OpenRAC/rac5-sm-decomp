/* LEVEL_06:0x18EF00 -- when the object's collection contains the current target, advances the global state from 15 to 4. */
typedef struct SC {
    char pad_00[0x45];
    unsigned char count;
    char pad_46[0x0E];
    void **items;
} SC;

typedef struct State {
    char pad_00[0x100];
    short mode;
    short next;
} State;

extern State D_00221EC0;
extern void *func_018B60(void);
extern void *func_1B1F80(SC *c, void *key);

void func_18EF00(char *obj)
{
    char *s0;

    s0 = *(char **)(obj + 0x54);
    if (func_1B1F80(*(SC **)s0, func_018B60()) != 0) {
        if (D_00221EC0.mode == 15) {
            D_00221EC0.next = 4;
        }
    }
}
