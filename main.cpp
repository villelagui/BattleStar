#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "masterClass.Nave.h"

using namespace std;



int main(){
setlocale(LC_ALL, "Portuguese");
int vn_random, vn_atk, vn_def, vn_lvl, vn_life, vn_life1, vn_life2, vn_pontos, addAttr, vn_rodada, vn_randdano, vn_randdef, vn_continua;
bool vp_criacao = true, vp_quit = false, vp_batalha = false;
string vv_vencedor1, vv_vencedor2, vv_campeao;


Nave Delta("Delta", 0, 0, 10, 5);
Nave Prisma("Prisma", 0, 0, 10, 5);
Nave Mundo("Mundo", 0, 0, 10, 5);
Nave Universo("Universo", 0, 0, 10, 5);

    while (vp_quit == false){
                    while (vp_criacao == true){
          CONTINUA3:    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||           Criando Naves de Ataque          ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||                 Nave Delta                 ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        system("pause");
                        vn_pontos = Delta.getPontos();
                            while (vn_pontos > 0){
                                system("cls");

                                Delta.dadosNave();
                                cout<<"Adicionar Pontos (Nave Delta):"<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cout<<"1. Ataque        "<<endl;
                                cout<<"2. Defesa        "<<endl;
                                cout<<"3. Life          "<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cin>>addAttr;
                                    if (addAttr == 1){
                                        vn_atk = Delta.getAtk();
                                        Delta.setAtk(vn_atk + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 2){
                                        vn_def = Delta.getDef();
                                        Delta.setDef(vn_def + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 3){
                                        vn_life = Delta.getLife();
                                        Delta.setLife(vn_life + 1);
                                        vn_pontos--;
                                    }
                                    else{
                                        cout<<"Digito Invalido!"<<endl;
                                        system("pause");
                                    };
                            Delta.setPontos(vn_pontos);
                            };
                            system("cls");
                        Delta.dadosNave();
                        system("pause");
                        system("cls");


                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||           Criando Naves de Ataque          ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||                 Nave Prisma                ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        system("pause");
                        vn_pontos = Prisma.getPontos();
                            while (vn_pontos > 0){
                                system("cls");

                                Prisma.dadosNave();
                                cout<<"Adicionar Pontos (Nave Prisma):"<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cout<<"1. Ataque        "<<endl;
                                cout<<"2. Defesa        "<<endl;
                                cout<<"3. Life          "<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cin>>addAttr;
                                    if (addAttr == 1){
                                        vn_atk = Prisma.getAtk();
                                        Prisma.setAtk(vn_atk + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 2){
                                        vn_def = Prisma.getDef();
                                        Prisma.setDef(vn_def + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 3){
                                        vn_life = Prisma.getLife();
                                        Prisma.setLife(vn_life + 1);
                                        vn_pontos--;
                                    }
                                    else{
                                        cout<<"Digito Invalido!"<<endl;
                                        system("pause");
                                    };
                            Prisma.setPontos(vn_pontos);
                            };
                            system("cls");
                        Prisma.dadosNave();
                        system("pause");
                        system("cls");

                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||           Criando Naves de Defesa          ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||                 Nave Mundo                 ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        system("pause");
                        vn_pontos = Mundo.getPontos();
                            while (vn_pontos > 0){
                                system("cls");

                                Mundo.dadosNave();
                                cout<<"Adicionar Pontos (Nave Mundo):"<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cout<<"1. Ataque        "<<endl;
                                cout<<"2. Defesa        "<<endl;
                                cout<<"3. Life          "<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cin>>addAttr;
                                    if (addAttr == 1){
                                        vn_atk = Mundo.getAtk();
                                        Mundo.setAtk(vn_atk + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 2){
                                        vn_def = Mundo.getDef();
                                        Mundo.setDef(vn_def + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 3){
                                        vn_life = Mundo.getLife();
                                        Mundo.setLife(vn_life + 1);
                                        vn_pontos--;
                                    }
                                    else{
                                        cout<<"Digito Invalido!"<<endl;
                                        system("pause");
                                    };
                            Mundo.setPontos(vn_pontos);
                            };
                            system("cls");
                        Mundo.dadosNave();
                        system("pause");
                        system("cls");

                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||           Criando Naves de Defesa          ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||                 Nave Universo              ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        system("pause");
                        vn_pontos = Universo.getPontos();
                            while (vn_pontos > 0){
                                system("cls");

                                Universo.dadosNave();
                                cout<<"Adicionar Pontos (Nave Universo):"<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cout<<"1. Ataque        "<<endl;
                                cout<<"2. Defesa        "<<endl;
                                cout<<"3. Life          "<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cin>>addAttr;
                                    if (addAttr == 1){
                                        vn_atk = Universo.getAtk();
                                        Universo.setAtk(vn_atk + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 2){
                                        vn_def = Universo.getDef();
                                        Universo.setDef(vn_def + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 3){
                                        vn_life = Universo.getLife();
                                        Universo.setLife(vn_life + 1);
                                        vn_pontos--;
                                    }
                                    else{
                                        cout<<"Digito Invalido!"<<endl;
                                        system("pause");
                                    };
                            Universo.setPontos(vn_pontos);
                            };
                            system("cls");
                        Universo.dadosNave();
                        system("pause");
                        system("cls");

                        vp_criacao = false;

                        cout<<"|||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||   Fim da Criação das Naves!   ||"<<endl;
                        cout<<"|||||||||||||||||||||||||||||||||||"<<endl;
                        system("pause");

                    }// Fim vp_criacao

system("cls");

srand(time(0));
vn_random = rand() % 100 + 1;
//cout<<"Sorteio: "<<vn_random<<endl;

                if (vn_random % 2 == 0){
         CONTINUA1: vn_life1 = Mundo.getLife();
                    vn_life2 = Delta.getLife();
                    vp_batalha = true;
                    Mundo.setLife(10);
                    Delta.setLife(10);
                        while (vp_batalha == true){
                                        //cout<<"Par";

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||         Batalha           ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||       "<<Delta.getNome()<<" X "<<Mundo.getNome()<<"       ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl<<endl;

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||          Batalha          ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||      Atacante: "<<Delta.getNome()<<"      ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;
                                        cout<<"||     Calculando Dano...    ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;

                                        //while (teste==true){
                                            vn_randdef = rand() % (Mundo.getDef() + 1);
                                            vn_randdano = rand() % (Delta.getAtk() + 1);

                                                if ((vn_randdano < vn_randdef) or (vn_randdano - vn_randdef <= 0)){
                                                    cout<<"||     Ataque Bloqueado!     ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    system("pause");
                                                    system("cls");
                                                }
                                                else{
                                                    cout<<"||         Dano: "<<vn_randdano - vn_randdef<<"           ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    Mundo.setLife(Mundo.getLife() - (vn_randdano - vn_randdef));
                                                    vn_life1 = Mundo.getLife();
                                                    cout<<Mundo.getLife();
                                                    system("pause");
                                                    system("cls");
                                                };

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||         Batalha           ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||       "<<Delta.getNome()<<" X "<<Mundo.getNome()<<"       ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl<<endl;

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||          Batalha          ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||      Atacante: "<<Mundo.getNome()<<"      ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;
                                        cout<<"||     Calculando Dano...    ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;

                                        //while (teste==true){
                                            vn_randdef = rand() % (Delta.getDef() + 1);
                                            vn_randdano = rand() % (Mundo.getAtk() + 1);

                                                if ((vn_randdano < vn_randdef) or (vn_randdano - vn_randdef <= 0)){
                                                    cout<<"||     Ataque Bloqueado!     ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    system("pause");
                                                    system("cls");
                                                }
                                                else{
                                                    cout<<"||         Dano: "<<vn_randdano - vn_randdef<<"           ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    Delta.setLife(Delta.getLife() - (vn_randdano - vn_randdef));
                                                    vn_life1 = Delta.getLife();
                                                    cout<<Delta.getLife();
                                                    system("pause");
                                                    system("cls");
                                                };
                            if ((Mundo.getLife() <= 0) or (Delta.getLife() <= 0)){
                                vp_batalha = false;
                            };
                            if (Mundo.getLife() <= 0){
                                vv_vencedor1 = Delta.getNome();
                            };
                            if (Delta.getLife() <= 0){
                                vv_vencedor1 = Mundo.getNome();
                            };
                        };//fim while life

                    system("pause");
                    if (vn_random % 2 == 0){
                        goto CONTINUA2;
                    };
                        }else{
                      CONTINUA2: vn_life1 = Universo.getLife();
                                vn_life2 = Prisma.getLife();
                                vp_batalha = true;
                                Universo.setLife(10);
                                Prisma.setLife(10);
                                    while (vp_batalha == true){
                                        //cout<<"Par";

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||         Batalha           ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||     "<<Prisma.getNome()<<" X "<<Universo.getNome()<<"     ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl<<endl;

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||          Batalha          ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||      Atacante: "<<Prisma.getNome()<<"     ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;
                                        cout<<"||     Calculando Dano...    ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;

                                        //while (teste==true){
                                            vn_randdef = rand() % (Universo.getDef() + 1);
                                            vn_randdano = rand() % (Prisma.getAtk() + 1);

                                                if ((vn_randdano < vn_randdef) or (vn_randdano - vn_randdef <= 0)){
                                                    cout<<"||     Ataque Bloqueado!     ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    system("pause");
                                                    system("cls");
                                                }
                                                else{
                                                    cout<<"||         Dano: "<<vn_randdano - vn_randdef<<"           ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    Universo.setLife(Universo.getLife() - (vn_randdano - vn_randdef));
                                                    vn_life1 = Universo.getLife();
                                                    cout<<Universo.getLife();
                                                    system("pause");
                                                    system("cls");
                                                };

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||         Batalha           ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||     "<<Prisma.getNome()<<" X "<<Universo.getNome()<<"     ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl<<endl;

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||          Batalha          ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||    Atacante: "<<Universo.getNome()<<"     ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;
                                        cout<<"||     Calculando Dano...    ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;

                                        //while (teste==true){
                                            vn_randdef = rand() % (Prisma.getDef() + 1);
                                            vn_randdano = rand() % (Universo.getAtk() + 1);

                                                if ((vn_randdano < vn_randdef) or (vn_randdano - vn_randdef <= 0)){
                                                    cout<<"||     Ataque Bloqueado!     ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    system("pause");
                                                    system("cls");
                                                }
                                                else{
                                                    cout<<"||         Dano: "<<vn_randdano - vn_randdef<<"           ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    Prisma.setLife(Prisma.getLife() - (vn_randdano - vn_randdef));
                                                    vn_life1 = Prisma.getLife();
                                                    cout<<Prisma.getLife();
                                                    system("pause");
                                                    system("cls");
                                                };
                            if ((Universo.getLife() <= 0) or (Prisma.getLife() <= 0)){
                                vp_batalha = false;
                            };
                            if (Universo.getLife() <= 0){
                                vv_vencedor2 = Prisma.getNome();
                            }else{
                                vv_vencedor2 = Universo.getNome();
                            };
                        };//fim while life

                        cout<<vv_vencedor1<<endl;
                        cout<<vv_vencedor2<<endl;

                    system("pause");
                    system("cls");
                    if (vn_random % 2 != 0){
                       goto CONTINUA1;
                    };
                }; //fim else
                if (vv_vencedor1 == "Delta"){
                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                cout<<"||   Vencedor 1: "<<Delta.getNome()<<"  |  Life: "<<Delta.getLife()<<"   ||"<<endl;
                        if (vv_vencedor2 == "Universo"){
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||  Vencedor 2: "<<Universo.getNome()<<"  |  Life: "<<Universo.getLife()<<" ||"<<endl;
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;

                            if (Delta.getLife() < Universo.getLife()){
                                cout<<"||         CAMPEÃO: "<<Universo.getNome()<<"         ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Universo.setPontos(Universo.getPontos() + 5);
                            }else{
                                cout<<"||          CAMPEÃO: "<<Delta.getNome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Delta.setPontos(Delta.getPontos() + 5);
                            };

                        }else{
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||  Vencedor 2: "<<Mundo.getNome()<<"  |  Life: "<<Mundo.getLife()<<" ||"<<endl;
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;

                            if (Delta.getLife() < Mundo.getLife()){
                                cout<<"||          CAMPEÃO: "<<Mundo.getNome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Mundo.setPontos(Mundo.getPontos() + 5);
                            }else{
                                cout<<"||          CAMPEÃO: "<<Delta.getNome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Delta.setPontos(Delta.getPontos() + 5);
                            };
                        };
                        system("pause");
                }else{
                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                cout<<"||   Vencedor 1: "<<Prisma.getNome()<<"  |  Life: "<<Prisma.getLife()<<"   ||"<<endl;
                        if (vv_vencedor2 == "Universo"){
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||  Vencedor 2: "<<Universo.getNome()<<"  |  Life: "<<Universo.getLife()<<" ||"<<endl;
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;

                            if (Prisma.getLife() < Universo.getLife()){
                                cout<<"||        CAMPEÃO: "<<Universo.getNome()<<"          ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Universo.setPontos(Universo.getPontos() + 5);
                            }else{
                                cout<<"||          CAMPEÃO: "<<Prisma.getNome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Prisma.setPontos(Prisma.getPontos() + 5);
                            };

                        }else{
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||  Vencedor 2: "<<Mundo.getNome()<<"  |  Life: "<<Mundo.getLife()<<" ||"<<endl;
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;

                            if (Prisma.getLife() < Mundo.getLife()){
                                cout<<"||          CAMPEÃO: "<<Mundo.getNome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Mundo.setPontos(Mundo.getPontos() + 5);
                            }else{
                                cout<<"||          CAMPEÃO: "<<Prisma.getNome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Prisma.setPontos(Prisma.getPontos() + 5);
                            };
                        };
                        system("pause");
                };
            system("cls");
            cout<<"Deseja continuar jogando? (1) SIM  |  (2) NÃO"<<endl;
            cin>>vn_continua;
                if (vn_continua == 1){
                    goto CONTINUA3;
                }else{
                vp_quit = true;
                };



    }; //Fim vp_quit
};
