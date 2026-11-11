/* LEVEL_15:0x113A90 -- resets the actor: copies the speed from its record, creates the effect handle with a short fade, zeroes it and stores it, and sets full scale. */
struct Q;

typedef struct Rec {
    char pad_00[0x9C];
    float speed;
} Rec;

typedef struct Obj {
    char pad_00[8];
    int f8;
    float fC;
    void *handle;
    char pad_14[0xFC];
    char q110[0x144];
    Rec *rec;
    char pad_258[0x74];
    float scale;
} Obj;

extern char *func_0FCE88(struct Q *a0, int a1, float a2);
extern void func_0FD340(float *p, float v);
extern void func_0FD348(void);

void func_113A90(Obj *object)
{
    char *handle;

    object->f8 = 0;
    object->fC = object->rec->speed;
    handle = func_0FCE88((struct Q *)object->q110, (int)func_0FD348, 0.095238097f);
    func_0FD340((float *)handle, 0.0f);
    object->handle = handle;
    object->scale = 1.0f;
}
