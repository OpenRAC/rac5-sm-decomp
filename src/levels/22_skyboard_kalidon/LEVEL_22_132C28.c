/* LEVEL_22:0x132C28 -- in state 1, runs the optional helper and, once the status reaches 5, points the linked object's float at +1 or -1. */
typedef struct Flags {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
} Flags;

typedef struct Target {
    char pad_00[8];
    float value;
} Target;

typedef struct Self {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0x2];
    Target *target;
    char pad_4C[8];
    Flags *flags;
} Self;

extern void func_133638(void);
extern int func_06F830(Self *self);

void func_132C28(Self *self)
{
    Flags *flags;

    flags = self->flags;
    if (self->state == 1) {
        if (flags->b0 != 0)
            func_133638();
        if (func_06F830(self) == 5) {
            if (flags->b2 != 0)
                self->target->value = 1.0f;
            else
                self->target->value = -1.0f;
        }
    }
}
