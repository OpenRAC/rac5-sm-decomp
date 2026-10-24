/* LEVEL_17.REL @ 0x05D418 — 20 octets, lwc1 */
typedef struct {
    char padF60[0xF60];
    float fF60;
} Rec;

extern float D_001B62A8;

float func_05D418(Rec *a0)
{
    return a0->fF60 - D_001B62A8;
}
