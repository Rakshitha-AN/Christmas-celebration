#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1415
float r;
float rotate = 0;
float X=2000,X1 = 400,X2= 300,X3 = 300;
int snow=1000;
int i,i1,i2,m,m1,m2,m3,m4,m5,m6;

void circle(int x,int y,int r,float red,float green,float blue)
{
    glColor3f(red,green,blue);
    glBegin(GL_POLYGON);
    for(float i=0;i<360;i=i+5)
        glVertex2f(r*sin(i*PI/180)+x,r*cos(i*PI/180)+y);
    glEnd();
}
void background()
{
    int    yx=600,yy=200;
  glClear(GL_COLOR_BUFFER_BIT);
  //church
  glBegin(GL_POLYGON);
  glColor3f(0.4,0.2,0.1);
  glPointSize(5.0);
  glVertex2f(yx+450,200+yy);
  glVertex2f(yx+450,600+yy);
  glVertex2f(yx+450,200+yy);
  glVertex2f(yx+1050,200+yy);
  glVertex2f(yx+1050,200+yy);
  glVertex2f(yx+1050,600+yy);
  glVertex2f(yx+450,600+yy);
  glVertex2f(yx+450,600+yy);
  glVertex2f(yx+750,750+yy);
  glVertex2f(yx+750,750+yy);
  glVertex2f(yx+1050,600+yy);
  glEnd();
//arch
  glBegin(GL_LINES);
  glColor3f(1,1,1);
  glVertex2f(yx+450,600+yy);
  glVertex2f(yx+750,750+yy);
  glVertex2f(yx+750,750+yy);
  glVertex2f(yx+1050,600+yy);
  glEnd();
  //door1
  glBegin(GL_POLYGON);
  glColor3f(0.25,0,0);
  glVertex2f(yx+700,200+yy);
  glVertex2f(yx+700,400+yy);
  glVertex2f(yx+700,400+yy);
  glVertex2f(yx+750,420+yy);
  glVertex2f(yx+750,420+yy);
  glVertex2f(yx+800,400+yy);
  glVertex2f(yx+800,400+yy);
  glVertex2f(yx+800,200+yy);
  glVertex2f(yx+750,200+yy);
  glVertex2f(yx+750,420+yy);
  glEnd();
  //1st window
  glBegin(GL_LINES);
  glColor3f(0.56,0.9,0.99);
  glVertex2f(yx+550,300+yy);
  glVertex2f(yx+550,400+yy);
  glVertex2f(yx+550,400+yy);
  glVertex2f(yx+650,400+yy);
  glVertex2f(yx+650,400+yy);
  glVertex2f(yx+650,300+yy);
  glVertex2f(yx+650,300+yy);
  glVertex2f(yx+550,300+yy);
  glVertex2f(yx+600,300+yy);
  glVertex2f(yx+600,400+yy);
  glVertex2f(yx+550,350+yy);
  glVertex2f(yx+650,350+yy);
  glEnd();
  //2nd window
  glBegin(GL_LINES);
  glColor3f(0.56,0.9,0.99);
  glVertex2f(yx+850,300+yy);
  glVertex2f(yx+850,400+yy);
  glVertex2f(yx+850,400+yy);
  glVertex2f(yx+950,400+yy);
  glVertex2f(yx+950,400+yy);
  glVertex2f(yx+950,300+yy);
  glVertex2f(yx+950,300+yy);
  glVertex2f(yx+850,300+yy);
  glVertex2f(yx+900,300+yy);
  glVertex2f(yx+900,400+yy);
  glVertex2f(yx+850,350+yy);
  glVertex2f(yx+950,350+yy);
  glEnd();
  //dome
  glBegin(GL_POLYGON);
  glColor3f(0.4,0.2,0.1);
  glVertex2f(yx+600,650+yy);
  glVertex2f(yx+600,850+yy);
  glVertex2f(yx+600,1150+yy);
  glVertex2f(yx+900,1150+yy);
  glVertex2f(yx+900,1150+yy);
  glVertex2f(yx+900,650+yy);
  glVertex2f(yx+600,1150+yy);
  glVertex2f(yx+750,1300+yy);
  glVertex2f(yx+750,1300+yy);
  glVertex2f(yx+900,1150+yy);
  glEnd();
     //bell 
      glBegin(GL_POLYGON);
      glColor3f(1.0,1.0,0.0);
      glVertex2f(yx+700,750+yy);
      glVertex2f(yx+800,750+yy);
      glVertex2f(yx+750,850+yy);
        
    glEnd();
    circle(yx+750,yy+750,15,10,10.0,0);
    


  
  //3rd window
   glBegin(GL_LINES);
  glColor3f(0.56,0.9,0.99);
  glVertex2f(yx+700,950+yy);
  glVertex2f(yx+800,950+yy);
  glVertex2f(yx+800,950+yy);
  glVertex2f(yx+800,1050+yy);
  glVertex2f(yx+800,1050+yy);
  glVertex2f(yx+700,1050+yy);
  glVertex2f(yx+700,1050+yy);
  glVertex2f(yx+700,950+yy);
  glVertex2f(yx+750,950+yy);
  glVertex2f(yx+750,1050+yy);
  glVertex2f(yx+700,1000+yy);
  glVertex2f(yx+800,1000+yy);
  glEnd();
  //cross
  glBegin(GL_LINES);
  glColor3f(1,1,1);
  glVertex2f(yx+750,1300+yy);
  glVertex2f(yx+750,1450+yy);
  glVertex2f(yx+700,1375+yy);
  glVertex2f(yx+800,1375+yy);
  glEnd();
//arch
  glBegin(GL_LINES);
  glColor3f(1,1,1);
  glVertex2f(yx+600,850+yy);
  glVertex2f(yx+900,850+yy);
  glVertex2f(yx+600,1150+yy);
  glVertex2f(yx+900,1150+yy);
  glEnd();

 //tree1
  glBegin(GL_POLYGON);
  int x=1800;
  int y=300;
  glColor3f(0,0.5,0);
  glVertex2f(x+300,700+y);
  glVertex2f(x+370,500+y);
  glVertex2f(x+370,500+y);
  glVertex2f(x+330,500+y);
  glVertex2f(x+330,500+y);
  glVertex2f(x+380,400+y);
  glVertex2f(x+380,400+y);
  glVertex2f(x+340,400+y);
  glVertex2f(x+340,400+y);
  glVertex2f(x+390,300+y);
  glVertex2f(x+390,300+y);
  glVertex2f(x+350,300+y);
  glVertex2f(x+350,300+y);
  glVertex2f(x+400,200+y);
  glVertex2f(x+200,200+y);
  glVertex2f(x+400,200+y);
  glVertex2f(x+200,200+y);
  glVertex2f(x+250,300+y);
  glVertex2f(x+250,300+y);
  glVertex2f(x+210,300+y);
  glVertex2f(x+210,300+y);
  glVertex2f(x+260,400+y);
  glVertex2f(x+260,400+y);
  glVertex2f(x+220,400+y);
  glVertex2f(x+220,400+y);
  glVertex2f(x+270,500+y);
  glVertex2f(x+270,500+y);
  glVertex2f(x+230,500+y);
  glVertex2f(x+230,500+y);
  glVertex2f(x+300,700+y); 
  glEnd();

  circle(x+250,y+300,10,1,0.85,0);
  circle(x+350,y+400,10,1,0,0);
  circle(x+275,y+500,10,1,0,0);
  circle(x+325,y+550,10,1,0.85,0);
//pot
  glBegin(GL_POLYGON);
  glColor3f(0.36,0,0.0);
  glVertex2f(x+250,200+y);
  glVertex2f(x+250,100+y);
  glVertex2f(x+250,100+y);
  glVertex2f(x+350,100+y);
  glVertex2f(x+350,100+y);
  glVertex2f(x+350,200+y);
  glEnd();
  //stick
  glBegin(GL_LINES);
  glColor3f(1,1,0);
  glVertex2f(x+300,700+y);
  glVertex2f(x+300,800+y);
  glEnd();
  //star
  glBegin(GL_POLYGON);
  glColor3f(0.7,0.7,0.7);
  glVertex2f(x+300,y+800);
  glVertex2f(x+320,y+780);
  glVertex2f(x+320,y+780);
  glVertex2f(x+310,y+820);
  glVertex2f(x+310,y+820);
  glVertex2f(x+330,y+840);
  glVertex2f(x+330,y+840);
  glVertex2f(x+305,y+840);
  glVertex2f(x+305,y+840);
  glVertex2f(x+300,y+880); 
  glVertex2f(x+300,y+880); 
  glVertex2f(x+295,y+840);
  glVertex2f(x+295,y+840);
  glVertex2f(x+270,y+840);
  glVertex2f(x+270,y+840);
  glVertex2f(x+290,y+820);
  glVertex2f(x+290,y+820);
  glVertex2f(x+280,y+780);
  glVertex2f(x+280,y+780);
  glVertex2f(x+300,y+800);
  glEnd();
  //tree2
  glBegin(GL_POLYGON);
  int x6=200;
  int y6=300;
  glColor3f(0,0.5,0);
  glVertex2f(x6+300,700+y6); 
  glVertex2f(x6+370,500+y6);
  glVertex2f(x6+370,500+y6);
  glVertex2f(x6+330,500+y6);
  glVertex2f(x6+330,500+y6);
  glVertex2f(x6+380,400+y6);
  glVertex2f(x6+380,400+y6);
  glVertex2f(x6+340,400+y6);
  glVertex2f(x6+340,400+y6);
  glVertex2f(x6+390,300+y6);
  glVertex2f(x6+390,300+y6);
  glVertex2f(x6+350,300+y6);
  glVertex2f(x6+350,300+y6);
  glVertex2f(x6+400,200+y6);
  glVertex2f(x6+200,200+y6);
  glVertex2f(x6+400,200+y6);
  glVertex2f(x6+200,200+y6);
  glVertex2f(x6+250,300+y6);
  glVertex2f(x6+250,300+y6);
  glVertex2f(x6+210,300+y6);
  glVertex2f(x6+210,300+y6);
  glVertex2f(x6+260,400+y6);
  glVertex2f(x6+260,400+y6);
  glVertex2f(x6+220,400+y6);
  glVertex2f(x6+220,400+y6);
  glVertex2f(x6+270,500+y6);
  glVertex2f(x6+270,500+y6);
  glVertex2f(x6+230,500+y6);
  glVertex2f(x6+230,500+y6);
  glVertex2f(x6+300,700+y6); 
  glEnd();

  circle(x6+250,y6+300,10,1,0.85,0);
  circle(x6+350,y6+400,10,1,0,0);
  circle(x6+275,y6+500,10,1,0,0);
  circle(x6+325,y6+550,10,1,0.85,0);
//pot
  glBegin(GL_POLYGON);
  glColor3f(0.36,0,0.0);
  glVertex2f(x6+250,200+y6);
  glVertex2f(x6+250,100+y6);
  glVertex2f(x6+250,100+y6);
  glVertex2f(x6+350,100+y6);
  glVertex2f(x6+350,100+y6);
  glVertex2f(x6+350,200+y6);
  glEnd();
  //stick
  glBegin(GL_LINES);
  glColor3f(1,1,0);
  glVertex2f(x6+300,700+y6);
  glVertex2f(x6+300,800+y6);
  glEnd();
  //star
  glBegin(GL_POLYGON);
  glColor3f(0.7,0.7,0.7);
  glVertex2f(x6+300,y6+800);
  glVertex2f(x6+320,y6+780);
  glVertex2f(x6+320,y6+780);
  glVertex2f(x6+310,y6+820);
  glVertex2f(x6+310,y6+820);
  glVertex2f(x6+330,y6+840);
  glVertex2f(x6+330,y6+840);
  glVertex2f(x6+305,y6+840);
  glVertex2f(x6+305,y6+840);
  glVertex2f(x6+300,y6+880); 
  glVertex2f(x6+300,y6+880); 
  glVertex2f(x6+295,y6+840);
  glVertex2f(x6+295,y6+840);
  glVertex2f(x6+270,y6+840);
  glVertex2f(x6+270,y6+840);
  glVertex2f(x6+290,y6+820);
  glVertex2f(x6+290,y6+820);
  glVertex2f(x6+280,y6+780);
  glVertex2f(x6+280,y6+780);
  glVertex2f(x6+300,y6+800);
  glEnd();
 //cloud
  glBegin(GL_POLYGON);
   glColor3f(1,1,1);
  for(m=0;m<=360;m++)
  {
     float deg2rad=m*PI/180;
     r=100;
     glVertex2f(cos(deg2rad)*r+1200,sin(deg2rad)*r+2220);
  }
 glEnd();

  glBegin(GL_POLYGON);
  for(m1=0;m1<=360;m1++)
  {
     float deg2rad=m1*PI/180;
     r=100;
     glVertex2f(cos(deg2rad)*r+1300,sin(deg2rad)*r+2220);
  }
 glEnd();

  glBegin(GL_POLYGON);
  for(m2=0;m2<=360;m2++)
  {
     float deg2rad=m2*PI/180;
     r=100;
     glVertex2f(cos(deg2rad)*r+1400,sin(deg2rad)*r+2220);
  }
 glEnd();

  glBegin(GL_POLYGON);
  for(m4=0;m4<=360;m4++)
  {
     float deg2rad=m4*PI/180;
     r=100;
     glVertex2f(cos(deg2rad)*r+1250,sin(deg2rad)*r+2275);
  }
 glEnd();

  glBegin(GL_POLYGON);
  for(m5=0;m5<=360;m5++)
  {
     float deg2rad=m5*PI/180;
     r=100;
     glVertex2f(cos(deg2rad)*r+1350,sin(deg2rad)*r+2275);
  }
 glEnd();

//cloud2
 glBegin(GL_POLYGON);
  for(int s=0;s<=360;s++)
  {
     float deg2rad=s*PI/180;
     r=100;
     glVertex2f(cos(deg2rad)*r+2000,sin(deg2rad)*r+1900);
  }
 glEnd();

 glBegin(GL_POLYGON);
  for(int s1=0;s1<=360;s1++)
  {
     float deg2rad=s1*PI/180;
     r=200;
     glVertex2f(cos(deg2rad)*r+2100,sin(deg2rad)*r+1900);
  }
 glEnd();

 glBegin(GL_POLYGON);
  for(int s2=0;s2<=360;s2++)
  {
     float deg2rad=s2*PI/180;
     r=200;
     glVertex2f(cos(deg2rad)*r+2200,sin(deg2rad)*r+1900);
  }
 glEnd();

 glBegin(GL_POLYGON);
  for(int s3=0;s3<=360;s3++)
  {
     float deg2rad=s3*PI/180;
     r=200;
     glVertex2f(cos(deg2rad)*r+2300,sin(deg2rad)*r+1900);
  }
 glEnd();

 //house
    glBegin(GL_POLYGON);
    glColor3f(1,0.7529,0.7960);
    glVertex2f(200,400);
    glVertex2f(200,800);
    glVertex2f(410,800);
    glVertex2f(410,450);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,0.4117,0);
    glVertex2f(200,400);
    glVertex2f(200,800);
    glVertex2f(50,800);
    glVertex2f(50,450);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55,0.40,0.291);
    glVertex2f(200,800);
    glVertex2f(300,1000);
    glVertex2f(410,800);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5555,0.444,0.2999);
    glVertex2f(200,800);
    glVertex2f(300,1000);
    glVertex2f(150,1000);
    glVertex2f(50,800);
    glEnd();
    //door1
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.66,0.4);
    glVertex2f(275,425);
    glVertex2f(275,550);
    glVertex2f(325,550);
    glVertex2f(325,425);
    glEnd();

    //house2
    int z=2200;
    glBegin(GL_POLYGON);
    glColor3f(1,0.7529,0.7960);
    glVertex2f(z+200,400);
    glVertex2f(z+200,800);
    glVertex2f(z+410,800);
    glVertex2f(z+410,450);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,0.4117,0);
    glVertex2f(z+200,400);
    glVertex2f(z+200,800);
    glVertex2f(z+50,800);
    glVertex2f(z+50,450);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55,0.40,0.291);
    glVertex2f(z+200,800);
    glVertex2f(z+300,1000);
    glVertex2f(z+410,800);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5555,0.444,0.2999);
    glVertex2f(z+200,800);
    glVertex2f(z+300,1000);
    glVertex2f(z+150,1000);
    glVertex2f(z+50,800);
    glEnd();
    //door
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.66,0.4);
    glVertex2f(z+275,425);
    glVertex2f(z+275,550);
    glVertex2f(z+325,550);
    glVertex2f(z+325,425);
    glEnd();
}
void snow_draw(void)
{
    glTranslatef(snow-2000,snow,0);
            circle(2000,snow,20,1,1,1);
            circle(2100,snow,20,1,1,1);
            circle(2200,snow,20,1,1,1);
            circle(2300,snow,20,1,1,1);
            circle(3000,snow,20,1,1,1);
            circle(3100,snow,20,1,1,1);
            circle(3200,snow,20,1,1,1);
            circle(3300,snow,20,1,1,1);
           if(snow<700){
                circle(2100+snow-500,snow+700,20,1,1,1);
                circle(2200+snow-500,snow+700,20,1,1,1);
                circle(2300+snow-500,snow+700,20,1,1,1);
                circle(3100+snow-500,snow+700,20,1,1,1);
                circle(3200+snow-500,snow+700,20,1,1,1);
                circle(3300+snow-500,snow+700,20,1,1,1);
            }
            if(snow<400){
                circle(2000+snow,snow+1200,20,1,1,1);
                circle(2100+snow,snow+1200,20,1,1,1);
                circle(2200+snow,snow+1200,20,1,1,1);
                circle(2300+snow,snow+1200,20,1,1,1);
                circle(3000+snow,snow+1200,20,1,1,1);
                circle(3100+snow,snow+1200,20,1,1,1);
                circle(3200+snow,snow+1200,20,1,1,1);
                circle(3300+snow,snow+1200,20,1,1,1);
            }
}
void christmas()
{
    glClear(GL_COLOR_BUFFER_BIT);
     background();
    glPushMatrix();
    snow_draw();
    glPopMatrix();
}
void display()
{
    christmas();
    glFlush();
}
  void idle()
{
        snow--;
        if(snow<100) 
        snow = 1000;
        glutPostRedisplay();
    }
  void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,3000,0,3000);
}

  int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(1400,650);
    glutCreateWindow("Christmas");
    glutInitWindowPosition(0,0);
    glutDisplayFunc(display);
    glutIdleFunc(idle);
    init();
    glutMainLoop();
}
