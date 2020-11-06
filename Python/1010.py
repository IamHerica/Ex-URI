dia1 = input().split()
hora1 = input().split(" : ")
dia2 = input().split()
hora2 = input().split(" : ")

diatxt, dia1 = dia1[0], int(dia1[1]) 
diatxt, dia2 = dia2[0], int(dia2[1])

hora1, minuto1, segundo1 = int(hora1[0]), int(hora1[1]), int(hora1[2])
hora2, minuto2, segundo2 = int(hora2[0]), int(hora2[1]), int(hora2[2])

segundosTotais1 = dia1*86400+hora1*3600+minuto1*60+segundo1
segundosTotais2 = dia2*86400+hora2*3600+minuto2*60+segundo2

if segundosTotais2+60>=segundosTotais1:
    tempoPassado = segundosTotais2-segundosTotais1
    
    dias = tempoPassado/86400
    tempoPassado = tempoPassado%86400

    horas = tempoPassado/3600
    tempoPassado = tempoPassado%3600

    minutos = tempoPassado/60
    tempoPassado = tempoPassado%60

    segundos = tempoPassado

    print(int(dias), "dia(s)")
    print(int(horas), "hora(s)")
    print(int(minutos), "minuto(s)")
    print(int(segundos), "segundo(s)")
