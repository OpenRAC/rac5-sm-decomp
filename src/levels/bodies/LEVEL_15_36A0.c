/* LEVEL_15.REL:0x0036a0 -- RAC5 vague 22 (L09), ecriture d'un flottant
 * dans une structure designee par un pointeur global. */
extern int *D_143EBC;

void func_0036A0(float f)
{
    *(float *)((char *)D_143EBC + 0x154) = f;
}
