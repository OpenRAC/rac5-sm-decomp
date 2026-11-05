/* USA LEVEL_01:0x0B91F0, 12 retail bytes; 20 raw-identical candidate sites.
 * The pinned C body is also 12 bytes but differs from body byte 0: the
 * compiler folds this unsigned comparison into an immediate comparison and
 * inversion. The pinned, SDK and GNU trial profiles give the same class of
 * difference. Revisit with evidence for the original comparison source or a
 * narrowly qualified compiler route. This source is uncounted.
 */
int func_0B91F0(unsigned int value)
{
    return 0xF8u < value;
}
