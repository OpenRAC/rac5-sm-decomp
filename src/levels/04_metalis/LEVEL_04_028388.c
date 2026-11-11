typedef struct {
    float f[13];
} Pose;

extern char *D_0020D12C;
extern char D_0024B740[];

void func_028388(int index)
{
    *(Pose *)(D_0020D12C + index * 52 + 0xE8) = *(Pose *)D_0024B740;
}
