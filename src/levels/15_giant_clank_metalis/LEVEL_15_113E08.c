/* LEVEL_15:0x113E08 -- when the object's countdown (+0xC) has run out, advances it by the owner's rate (+0xA0 of the block at +0x254) times the frame factor and starts the follow-up on the global target. */
struct Obj;

extern float D_002ECBA8[];
extern float func_020EB8(void);
extern void func_110C28(struct Obj *o, float *target);

void func_113E08(char *object)
{
    char *owner;
    float *target;
    float f;

    owner = *(char **)(object + 0x254);
    if (*(float *)(object + 0xC) <= 0.0f) {
        target = D_002ECBA8;
        f = func_020EB8();
        *(float *)(object + 0xC) = *(float *)(object + 0xC) + *(float *)(owner + 0xA0) * f;
        func_110C28((struct Obj *)object, target);
    }
}
