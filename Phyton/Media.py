
nome = input("Nome do(a) aluno(a): ")
curso = input("Curso: ")
disciplina = input("Disciplina: ")
semestre = input("Semestre: ")

n1 = float(input("Nota do Primeiro Bimestre: "))
n2 = float(input("Nota do Segundo Bimestre: "))

media = (n1 + n2) / 2

print("\n")

print("Aluno(a):", nome)
print("Curso:", curso)
print("Disciplina:", disciplina)
print("Semestre:", semestre)
print(f"Média: {media:.2f}")

if media > 100:
    print ("lançamento incorreto!")

if media >=60 and media <=100:
    print("APROVADO!!")
   
elif media >=20 and media < 60:
    print("RECUPERAÇÃO!!")
   
else:
    print("REPROVADO!!")
