typedef struct {
    float f[13];
} Pose;

extern char *D_002082AC;
extern char D_00246840[];

void func_028BF8(int index)
{
    *(Pose *)(D_002082AC + index * 52 + 0xE8) = *(Pose *)D_00246840;
}
