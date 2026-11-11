/* LEVEL_15:0x137898 -- clears the global rig's blend value and starts the blend helper from it with a step of 0.15. */
typedef struct {
    char pad_00[0x134];
    float blend;
} Rig;

extern Rig D_002F4F88;
extern void func_134680(float value, float step, int mode);

void func_137898(void)
{
    D_002F4F88.blend = 0;
    func_134680(D_002F4F88.blend, 0.15f, 1);
}
