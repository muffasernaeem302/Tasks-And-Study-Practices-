public class Lab{

	public static int counter = 0;
	public static final String ID_PREFIX ="PRD_";

// ATTRIBUTES:

	private String id ;
	private String UniversityName;
	private String DepartmentName;
	private String SectionName;
	private String labName;
	private int totalComputers;
	private int bookedComputers;
	private Date labdate;

// Methods :

public Lab()
{
	this("COMSATS");
	System.out.println("Default Constructor");
}

public Lab(String UniversityName)
{
	this(UniversityName,"CS");
}

public Lab(String UniversityName , String DepartmentName)
{
	this(UniversityName, DepartmentName, "C");
}


public Lab(String UniversityName , String DepartmentName , String SectionName )
{
	this(UniversityName,DepartmentName ,SectionName,"C-8",0,0);

}

public Lab(String UniversityName,String DepartmentName,String SectionName ,String labName,int totalComputers, int bookedComputer)
{
	this(UniversityName,DepartmentName,SectionName ,labName,totalComputers,bookedComputer,new Date(1,1,1));
}

public Lab(Lab other)
{
	this(other.UniversityName,other.DepartmentName,other.SectionName ,other.labName,other.totalComputers,other.bookedComputers,other.labdate);
}

public Lab(String UniversityName,String DepartmentName,String SectionName ,String labName,int totalComputers, int bookedComputer, Date labdate)
{
	this.id=generateid();
	setUniversityName(UniversityName);
	setDepartmentName(DepartmentName);
	setSectionName(SectionName);
	setlabName(labName);
	settotalComputers(totalComputers);
	setbookedComputers(bookedComputer);
	this.labdate=new Date(labdate);

}
private static String generateid() 
{
	return ID_PREFIX + String.format("%04d" , ++counter);
}

public String getUniversityName()
{
	return UniversityName;
}


public String getDepartmentName()
{
	return DepartmentName;
}

public String getSectionName()
{
	return SectionName;
}

public String getlabName()
{
	return labName;
}

public int gettotalComputers()
{
	return totalComputers;
}

public int getbookedComputers()
{
	return bookedComputers;
}

public Date getlabdate()
{
	return labdate;
}

public void setUniversityName(String UniversityName)
{
if(UniversityName==null || UniversityName.trim().isEmpty())
{
	this.UniversityName="Unnamed Uni";
}
else
{
	this.UniversityName=UniversityName;
}
}

public void setDepartmentName(String DepartmentName)
{
if(DepartmentName==null || DepartmentName.trim().isEmpty())
{
	this.DepartmentName="Unnamed DEP";
}
else
{
	this.DepartmentName=DepartmentName;
}
}


public void setSectionName(String SectionName)
{
if(SectionName==null || SectionName.trim().isEmpty())
{
	this.SectionName="Unnamed SEC";
}
else
{
	this.SectionName=SectionName;
}
}

public void setlabName(String labName)
{
if(labName==null || labName.trim().isEmpty())
{
	this.labName="Unnamed LAB";
}
else
{
	this.labName=labName;
}
}

public void settotalComputers(int totalComputers)
{
this.totalComputers = Math.max(0,totalComputers);

}

public void setbookedComputers(int bookedComputer)
{
if(bookedComputer<0)
{
System.out.println("BookedComputers CANNOT BE NEGATIVE");
	this.bookedComputers=0;
}
else
{
this.bookedComputers=bookedComputer;
}
}

public void bookComputers(int count)
{
  if(count <= (totalComputers - bookedComputers))
{
	bookedComputers +=count ;
}
}

public void cancelBooking(int count)
{
  if(count <= bookedComputers)
{
	bookedComputers -=count ;
}
}

public int availableComputers()
{
	return totalComputers - bookedComputers;

}

public static int getTotalLabs()
{
    return counter;
}

public boolean equals(Object obj)
{
if( obj instanceof Lab)
{
Lab other = (Lab )obj;
return this.id.equals(other.id);
}
return false;
}

public String toString()
{
return  "Lab ID            :            "+id+
	"\nUniversity        :            "+UniversityName+
	"\nDepartment        :            "+DepartmentName+
	"\nSection           :            "+SectionName+
	"\nLab Date          :            " + labdate +
	"\nTotal Computers   :            "+totalComputers+
	"\nBooked Computers  :            "+bookedComputers;
}
}














