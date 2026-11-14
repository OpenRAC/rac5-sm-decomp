/* LEVEL_10:0x176828 -- counts a timer down by one tick; returns -1 while it runs and 3 once the object is no longer in state 8 with the second check clear. */
typedef struct {
    char pad_00[4];
    float timer;
} Timer;

typedef struct {
    char pad_00[0x74];
    unsigned int flags;
    char pad_78[0x60];
    float fD8;
} Self;

extern void func_173718(Self *self);
extern int func_173020(char *object);
extern int func_173228(unsigned char *a0);

int func_176828(Timer *t, Self *self)
{
    func_173718(self);
    if (t->timer > 0.0f) {
        if (self->flags & 0x4000)
            self->fD8 += 0.009259261190891266f;
    } else if (func_173020((char *)self) != 8 || func_173228((unsigned char *)self) != 0) {
        return 3;
    }
    t->timer -= 0.03333333507180214f;
    return -1;
}
