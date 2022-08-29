// Marvish Chandra
#include <stdio.h>

public static void alopecia_areata_conditions(type){
    causes = ["genetics","Health conditions such as: Down's syndrome, thryoid disease, or vitiligo","vitamin D deficiency"]
    symptoms = ["primarily hair loss","alopecia totalis, an advanced condition causing loss of all scalp hair","alopecia univeralis, an advanced condition causing loss of all body hair"]
    conditonTypes = ["Alopecia totalis","Alopecia univeralis","Diffuse alopecia areata","Ophiasis alopecia"]
    if type == conditionTypes[0]:
    printf("The impact is one or more coin-sized patches of hair loss on the skin or body.")
    if type == conditionTypes[1]:
    printf("The impact is losing hair on the scalp and may lose all hair on the face. Ultimately, you suffer with total body hair loss.")
    if type == conditionTypes[2]:
    printf("The condition results in sudden and unexpected thinning of hair all over the scalp.")
    if type == conditionTypes[3]:
    printf("The individual suffers hair loss along the sides and lower back of the scalp.")
    else: printf("The type condition is either an invalid input or is not found to be apart of Alopecia Areata.")
    return 0;
}

public static void alopecia(genomeRegion){
    if genomeRegion == "2q33.2":
    printf("This first region is identified by CTLA4 containing cytotoxic T-lymphocyte-associated protein 4.")
    if genomeRegion == "4q27":
    printf("This second region contains the IL2-/IL-21 locus.")
    if genomeRegion == "6p21.32":
    printf("This third region contains the HLA class II region.")
    if genomeRegion == "6q25.1":
    printf("This fourth region contains the ULBP gene cluster.")
    if genomeRegion == "9q31.1":
    printf("This fifth region contains syntaxin 17 (STX17), a SNARE protein with a specific role in autophagy.")
    if genomeRegion == "10p15.1":
    printf("This sixth region contains IL-2RA.")
    if genomeRegion == "11q13":
    printf("This seventh region contains peroxiredoxin 5 (PRDNX5).")
    if genomeRegion == "12q13":
    printf("This eighth region contains ikaros family zinc-finger 4 (IKZF4;Eos) and v-erb-b2 avian erythroblastic leukemia viral oncogene homolog 3 (ERBB3).")
    else: printf("The associated input is not part of the genome or is not listed as a gene for the alopecia areata condition.")
    return 0;
}