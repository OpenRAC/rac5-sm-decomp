/* LEVEL_05:0x027538 -- the default pose of the game is copied into the
   indexed bone of the skeleton. */
typedef struct {
    float f[13];
} Pose;

extern char *D_001E332C;
extern char D_0021CC40[];

void func_027538(int index)
{
    *(Pose *)(D_001E332C + index * 52 + 0xE8) = *(Pose *)D_0021CC40;
}
