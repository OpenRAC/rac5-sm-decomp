/* USA LEVEL_01.REL:0x1255B0. Retained C hypothesis, not a match.
 * The pinned profile links 544 bytes against a 544-byte candidate body;
 * the first difference is at body byte 32. See docs/contributing/matching-blockers.md. */
void func_1255B0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;

  fVar5 = *param_3;
  fVar19 = param_3[4];
  fVar13 = param_2[10];
  fVar20 = param_3[1];
  fVar6 = param_3[2];
  fVar3 = param_2[9];
  fVar2 = *param_2;
  fVar11 = param_3[6];
  fVar10 = param_2[1];
  fVar14 = param_3[5];
  fVar1 = param_2[3];
  fVar7 = param_2[4];
  fVar4 = param_2[6];
  fVar22 = param_3[0xc];
  fVar21 = param_3[9];
  fVar16 = param_3[8];
  fVar18 = param_3[10];
  fVar8 = param_2[7];
  fVar15 = param_2[0xb];
  fVar9 = param_2[2];
  fVar12 = param_2[5];
  fVar17 = param_2[8];
  fVar23 = param_3[0xe];
  fVar24 = param_3[0xd];
  param_1[2] = fVar2 * fVar6 + fVar10 * fVar11 + fVar9 * fVar18;
  param_1[5] = fVar1 * fVar6 + fVar7 * fVar11 + fVar12 * fVar18;
  param_1[3] = fVar1 * fVar5 + fVar7 * fVar19 + fVar12 * fVar16;
  param_1[4] = fVar1 * fVar20 + fVar7 * fVar14 + fVar12 * fVar21;
  param_1[1] = fVar2 * fVar20 + fVar10 * fVar14 + fVar9 * fVar21;
  param_1[6] = fVar4 * fVar5 + fVar8 * fVar19 + fVar17 * fVar16;
  param_1[7] = fVar4 * fVar20 + fVar8 * fVar14 + fVar17 * fVar21;
  *param_1 = fVar2 * fVar5 + fVar10 * fVar19 + fVar9 * fVar16;
  param_1[8] = fVar4 * fVar6 + fVar8 * fVar11 + fVar17 * fVar18;
  param_1[9] = fVar3 * fVar5 + fVar13 * fVar19 + fVar15 * fVar16 + fVar22;
  param_1[10] = fVar3 * fVar20 + fVar13 * fVar14 + fVar15 * fVar21 + fVar24;
  param_1[0xb] = fVar3 * fVar6 + fVar13 * fVar11 + fVar15 * fVar18 + fVar23;
  return;
}
