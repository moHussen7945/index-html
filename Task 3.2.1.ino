


IR1 = <PIN 1>
IR2 = <PIN 2>
IR3 = <PIN 3>

void setup 
{
DECLARE IR1 IR2 AND IR3 AS INPUTS
}

void loop 
{
IR1 = digitalRead(<PIN 1>)
IR2 = digitalRead(<PIN 2>)
IR3 = digitalRead(<PIN 3>)

if (IR1 == LOW && IR2 == HIGH && IR3 == LOW)//Straight path
{
Forward();
}

if (IR1 == HIGH && IR2 == LOW && IR3 == LOW)//Left turn
{
Left();
}

if (IR1 == LOW && IR2 == LOW && IR3 == HIGH)//Right Turn
{
Right();
}

if (IR1 == HIGH && IR2 == LOW && IR3 == HIGH)//T Intersection
{
Left(); // As left is possible
}

if (IR1 == HIGH && IR2 == HIGH && IR3 == LOW)//Left T Intersection
{
Left();// As Left is possible
}

if (IR1 == LOW && IR2 == HIGH && IR3 == HIGH)//Right T Tntersection
{
Forward();//As Straight path is possible
}

if (IR1 == LOW && IR2 ==LOW && IR3 == LOW)//Dead End
{
U_Turn(); //As no other direction is possible
}

if (IR1 == HIGH && IR2 == HIGH && IR3 == HIGH)//4 Lane intersection
{
Left(); //As no other direction is possible
}

 
}
