/* LEVEL_05:0x16EA40 -- placement copy of LEVEL_01_17D0C8.c: timer step of an object: the first update starts the effect (request code, sound thread stop, counter, 20.0004 second timer), later updates count down by one and restart the sound and the object's action at zero. */
typedef struct Obj {
    char pad0[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad47[0x29];
    float timer;
} Obj;

extern void func_0256B8(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
extern void SND_StopSoundThread__Fv(void);
extern void SND_StartSoundThread__Fv(void);
extern void func_079CF8(Obj *o, int mode);

void func_16EA40(Obj *o)
{
    if (o->b46 == 0) {
        func_0256B8(o->b45, 0, 0, 0, 0, -1, 1);
        SND_StopSoundThread__Fv();
        o->b46 = o->b46 + 1;
        o->timer = 20.000399f;
    } else {
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f) {
            SND_StartSoundThread__Fv();
            func_079CF8(o, 1);
        }
    }
}
