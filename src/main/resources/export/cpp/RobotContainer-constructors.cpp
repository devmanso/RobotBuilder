##${Collections.reverse($components)}
#foreach( $component in $components )
#if ($helper.exportsTo("OI", $component)
     && ("#constructor($component)" != "" || "#extra($component)" != "") && "#base_type($component)" != "Joystick" && "#type($component)" != "JoystickButton")
    #constructor($component)
    #extra($component)
#end
#end

