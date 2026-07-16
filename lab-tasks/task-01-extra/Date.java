public class Date{
	
	private int day;
	private int month;
	private int year;

 Date(int day,int month,int year){
	this.day = day;	
	this.month=month;
	this.year=year;
}

public Date(Date other){
	this.day=other.getday();
	this.month = other.getmonth();
	this.year = other.getyear();
}

public int getday()
{
	return day;
}

public int getmonth()
{
	return month;
}

public int getyear()
{
	return year;
}


public void setday(int day)
{
	if(day>=1&&day<=30)
	this.day=day;
}

public void setmonth(int month)
{
	if(month>=1&&month<=12)
	this.month=month;
}

public void setyear(int year)
{
	if(year>0)
	this.year=year;
}

public String toString()
{
	return String.format("%02d-%02d-%d ",day,month, year);
}


// EQUAL ONE :

public boolean equals(Date other)
{
return this.day==other.day && this.month == other.month && this.year == other.year ;
}

}







