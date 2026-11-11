typedef struct {
    float f[13];
} Pose;

extern char *D_001DDDAC;
extern char D_002186C0[];

void func_027728(int index)
{
    *(Pose *)(D_001DDDAC + index * 52 + 0xE8) = *(Pose *)D_002186C0;
}
