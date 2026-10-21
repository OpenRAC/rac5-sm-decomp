/* LEVEL_07:0x183A80 -- asks the shared code for the current record and, when
   it hands one back, copies the level's record into it. */
typedef struct {
    float x;
    float y;
} V2;

typedef struct {
    V2 v;
    int i;
} Rec;

extern int D_3AB818;

Rec *func_0A1BF8(int *found, int *tag, int flag);

void func_183A80(Rec *src)
{
    int found;
    Rec *dst = func_0A1BF8(&found, &D_3AB818, 1);

    if (found) {
        *dst = *src;
        *(int *)((char *)dst + 0xC) = 0;
    }
}
