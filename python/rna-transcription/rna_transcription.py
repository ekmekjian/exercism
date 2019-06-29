def to_rna(dna_strand):
    rna = ''
    for i in range(len(dna_strand)):
        if(dna_strand[i] == 'G'):
            rna += 'C'
        elif(dna_strand[i] == 'C'):
            rna += 'G'
        elif(dna_strand[i] == 'T'):
            rna += 'A'
        elif(dna_strand[i] == 'A'):
            rna += 'U'
    return rna
        