--            mesh,  x, y, z, scale x, scale y, scale z, rotate x, rotate y, rotate z ) 
-- cube is, 400 wide, 1000 tall.

--first "H"
AddObject( "Cube.x", 800, 500, 600, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", -800, 500, 600, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", 800, 1900, 600, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", -800, 1900, 600, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", -500, 1200, 600, 40, 100, 40, 0, 0, 90 )
AddObject( "Cube.x", 500, 1200, 600, 40, 100, 40, 0, 0, 90 )

-- first Skyscrapper
AddObject( "Cube.x", 200, 500, 2500, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", -200, 500, 2500, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", 200, 1500, 2500, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", -200, 1500, 2500, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", 200, 2500, 2500, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", -200, 2500, 2500, 40, 100, 40, 0, 0, 0 )

-- second split Skyscrappers
AddObject( "Cube.x", 800, 500, 5000, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", -800, 500, 5000, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", 800, 1500, 5000, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", -800, 1500, 5000, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", 800, 2500, 5000, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", -800, 2500, 5000, 40, 100, 40, 0, 0, 0 )

-- Ending Platform
AddObject( "Cube.x", 200, 500, 7800, 40, 100, 40, 0, 0, 0 )
AddObject( "Cube.x", -200, 500, 7800, 40, 100, 40, 0, 0, 0 )







AddObject( "Floor.x",0,0,0,1,1,1,0,0,0);
AddObject( "Floor.x",0,0,1000,1,1,1,0,0,0);
AddObject( "Floor.x",0,0,3000,1,1,1,0,0,0);
AddObject( "Floor.x",0,0,5000,1,1,1,0,0,0);
AddObject( "Floor.x",0,0,7000,1,1,1,0,0,0);



AddObject( "Skybox.x",0,-1000,3000,1,2,5,0,0,0);