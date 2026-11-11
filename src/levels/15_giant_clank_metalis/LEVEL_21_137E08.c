/* LEVEL_21.REL:0x137e08 -- RAC5 vague 22 (L09), famille de 60 octets.
 *
 * Le retail compare *a1 a la sentinelle -1000.0f : si la valeur n'est pas
 * la sentinelle, *a0 recoit *a1 * k ; sinon *a1 recoit *a0 / k.
 */
void func_137E08(float *a0, float *a1, float k)
{
    if (*a1 != -1000.0f) {
        *a0 = *a1 * k;
    } else {
        *a1 = *a0 / k;
    }
}
