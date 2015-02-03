/*------------------------------------------------------------------------
 # MD Slider 2.15 - March 18, 2013
 # ------------------------------------------------------------------------
 # Websites:  http://www.megadrupal.com -  Email: info@megadrupal.com
 --------------------------------------------------------------------------*/
(function(e) {
    effectsIn = ["bounceIn", "bounceInDown", "bounceInUp", "bounceInLeft", "bounceInRight", "fadeIn", "fadeInUp", "fadeInDown", "fadeInLeft", "fadeInRight", "fadeInUpBig", "fadeInDownBig", "fadeInLeftBig", "fadeInRightBig", "flipInX", "flipInY", "foolishIn", "lightSpeedIn", "rollIn", "rotateIn", "rotateInDownLeft", "rotateInDownRight", "rotateInUpLeft", "rotateInUpRight", "twisterInDown", "twisterInUp", "swap", "swashIn", "tinRightIn", "tinLeftIn", "tinUpIn", "tinDownIn"];
    effectsOut = ["bombRightOut", "bombLeftOut", "bounceOut", "bounceOutDown", "bounceOutUp", "bounceOutLeft", "bounceOutRight", "fadeOut", "fadeOutUp", "fadeOutDown", "fadeOutLeft", "fadeOutRight", "fadeOutUpBig", "fadeOutDownBig", "fadeOutLeftBig", "fadeOutRightBig", "flipOutX", "flipOutY", "foolishOut", "hinge", "holeOut", "lightSpeedOut", "puffOut", "rollOut", "rotateOut", "rotateOutDownLeft", "rotateOutDownRight", "rotateOutUpLeft", "rotateOutUpRight", "rotateDown", "rotateUp", "rotateLeft", "rotateRight", "swashOut", "tinRightOut", "tinLeftOut", "tinUpOut", "tinDownOut", "vanishOut"];
    var t = effectsIn.length;
    var n = effectsOut.length;
    e.fn.mdSlider = function(r) {
        function _() {
            if ("ActiveXObject" in window) e(".md-item-opacity", s).addClass("md-ieopacity");
            s.addClass("loading-image");
            var t = "";
            if (r.responsive) t += " md-slide-responsive";
            if (r.fullwidth) t += " md-slide-fullwidth";
            if (r.showBullet && r.posBullet) t += " md-slide-bullet-" + r.posBullet;
            if (!r.showBullet && r.showThumb && r.posThumb) t += " md-slide-thumb-" + r.posThumb;
            s.wrap('<div class="' + r.className + t + '"><div class="md-item-wrap"></div></div>');
            d = s.parent();
            p = d.parent();
            l = r.responsive ? s.width() : r.width;
            c = r.height;
            o = [];
            v = et();
            if (v) p.addClass("md-touchdevice");
            s.find("." + r.itemClassName).each(function(t) {
                f++;
                o[t] = e(this);
                e(this).find(".md-object").each(function() {
                    var t = e(this).data("y") ? e(this).data("y") : 0,
                        n = e(this).data("x") ? e(this).data("x") : 0,
                        i = e(this).data("width") ? e(this).data("width") : 0,
                        s = e(this).data("height") ? e(this).data("height") : 0;
                    if (i > 0) {
                        e(this).width(i / r.width * 100 + "%")
                    }
                    if (s > 0) {
                        e(this).height(s / r.height * 100 + "%")
                    }
                    var o = {
                        top: t / r.height * 100 + "%",
                        left: n / r.width * 100 + "%"
                    };
                    e(this).css(o)
                });
                if (t > 0) e(this).hide()
            });
            D();
            P();
            if (r.slideShow) {
                k = true
            }
            e(".md-object", s).hide();
            if (e(".md-video", p).size() > 0) {
                if (r.videoBox) {
                    e(".md-video", p).mdvideobox()
                } else {
                    var n = e('<div class="md-video-control" style="display: none"></div>');
                    p.append(n);
                    e(".md-video", p).click(function() {
                        var t = e("<iframe></iframe>");
                        t.attr("allowFullScreen", "").attr("frameborder", "0").css({
                            width: "100%",
                            height: "100%",
                            background: "black"
                        });
                        t.attr("src", e(this).attr("href"));
                        var r = e('<a href="#" class="md-close-video" title="Close video"></a>');
                        r.click(function() {
                            n.html("").hide();
                            k = true;
                            return false
                        });
                        n.html("").append(t).append(r).show();
                        k = false;
                        return false
                    })
                }
            }
            e(window).resize(function() {
                tt()
            }).trigger("resize");
            rt();
            var i = false;
            e(window).blur(function() {
                i = (new Date).getTime()
            });
            e(window).focus(function() {
                if (i) {
                    var e = (new Date).getTime() - i;
                    if (e > C - O) O = C - 200;
                    else O += e;
                    i = false
                }
            })
        }

        function D() {
            if (r.slideShow && r.showLoading) {
                var t = e('<div class="loading-bar-hoz loading-bar-' + r.loadingPosition + '"><div class="br-timer-glow" style="left: -100px;"></div><div class="br-timer-bar" style="width:0px"></div></div>');
                p.append(t);
                y = e(".br-timer-bar", t);
                b = e(".br-timer-glow", t)
            }
            if (r.slideShow && r.pauseOnHover) {
                d.hover(function() {
                    L = true
                }, function() {
                    L = false
                })
            }
            if (r.styleBorder != 0) {
                var n = '<div class="border-top border-style-' + r.styleBorder + '"></div>';
                n += '<div class="border-bottom border-style-' + r.styleBorder + '"></div>';
                if (!r.fullwidth) {
                    n += '<div class="border-left border-style-' + r.styleBorder + '"><div class="edge-top"></div><div class="edge-bottom"></div></div>';
                    n += '<div class="border-right border-style-' + r.styleBorder + '"><div class="edge-top"></div><div class="edge-bottom"></div></div>'
                }
                p.append(n)
            }
            if (r.styleShadow != 0) {
                var i = '<div class="md-shadow md-shadow-style-' + r.styleShadow + '"></div>'
            }
            if (r.showArrow) {
                m = e('<div class="md-arrow"><div class="md-arrow-left"><span></span></div><div class="md-arrow-right"><span></span></div></div>');
                d.append(m);
                e(".md-arrow-right", m).bind("click", function() {
                    R()
                });
                e(".md-arrow-left", m).bind("click", function() {
                    U()
                })
            }
            if (r.showBullet != false) {
                g = e('<div class="md-bullets"></div>');
                p.append(g);
                for (var u = 0; u < f; u++) {
                    g.append('<div class="md-bullet"  rel="' + u + '"><a></a></div>')
                }
                if (r.showThumb) {
                    var a = parseInt(s.data("thumb-width")),
                        l = parseInt(s.data("thumb-height"));
                    for (var u = 0; u < f; u++) {
                        var c = o[u].data("thumb"),
                            h = o[u].data("thumb-type");
                        if (c) {
                            var v;
                            if (h == "image") v = e("<img />").attr("src", c).css({
                                top: -(9 + l) + "px",
                                left: -(a / 2 - 2) + "px",
                                opacity: 0
                            });
                            else v = e("<span></span>").attr("style", c).css({
                                top: -(9 + l) + "px",
                                left: -(a / 2 - 2) + "px",
                                opacity: 0
                            });
                            e("div.md-bullet:eq(" + u + ")", g).append(v).append('<div class="md-thumb-arrow" style="opacity: 0"></div>')
                        }
                    }
                    e("div.md-bullet", g).hover(function() {
                        e(this).addClass("md_hover");
                        e("img, span", this).show().animate({
                            opacity: 1
                        }, 200);
                        e(".md-thumb-arrow", this).show().animate({
                            opacity: 1
                        }, 200)
                    }, function() {
                        e(this).removeClass("md_hover");
                        e("img, span", this).animate({
                            opacity: 0
                        }, 200, function() {
                            e(this).hide()
                        });
                        e(".md-thumb-arrow", this).animate({
                            opacity: 0
                        }, 200, function() {
                            e(this).hide()
                        })
                    })
                }
                e("div.md-bullet", p).click(function() {
                    if (e(this).hasClass("md-current")) {
                        return false
                    }
                    var t = e(this).attr("rel");
                    F(t)
                })
            } else if (r.showThumb) {
                var E = e('<div class="md-thumb"><div class="md-thumb-container"><div class="md-thumb-items"></div></div></div>').appendTo(p);
                w = e(".md-thumb-items", E);
                for (var u = 0; u < f; u++) {
                    var c = o[u].data("thumb"),
                        h = o[u].data("thumb-type");
                    if (c) {
                        var S = e('<a class="md-thumb-item" />').attr("rel", u);
                        if (h == "image") S.append(e("<img />").attr("src", c));
                        else S.append(e("<span />").attr("style", c).css("display", "inline-block"));
                        w.append(S)
                    }
                }
                e("a", w).click(function() {
                    if (e(this).hasClass("md-current") || N) {
                        return false
                    }
                    var t = e(this).attr("rel");
                    F(t)
                })
            }
        }

        function P() {
            if (v) {
                s.bind("touchstart", function(e) {
                    if (S) return false;
                    e = e.originalEvent.touches[0] || e.originalEvent.changedTouches[0];
                    S = true;
                    x = undefined;
                    s.mouseY = e.pageY;
                    s.mouseX = e.pageX
                });
                s.bind("touchmove", function(e) {
                    e = e.originalEvent.touches[0] || e.originalEvent.changedTouches[0];
                    if (S) {
                        var t = e.pageX || e.clientX;
                        var n = e.pageY || e.clientY;
                        if (typeof x == "undefined") {
                            x = !!(x || Math.abs(n - s.mouseY) > Math.abs(t - s.mouseX))
                        }
                        if (x) {
                            S = false;
                            return
                        } else {
                            T = t - s.mouseX;
                            return false
                        }
                    }
                    return
                });
                s.bind("touchend", function(e) {
                    if (S) {
                        S = false;
                        if (T > r.touchSensitive) {
                            U();
                            T = 0;
                            return false
                        } else if (T < -r.touchSensitive) {
                            R();
                            T = 0;
                            return false
                        }
                    }
                })
            } else {
                d.hover(function() {
                    if (m) {
                        m.stop(true, true).animate({
                            opacity: 1
                        }, 200)
                    }
                }, function() {
                    if (m) {
                        m.stop(true, true).animate({
                            opacity: 0
                        }, 200)
                    }
                });
                p.trigger("hover")
            }
            if (r.enableDrag) {
                s.mousedown(function(e) {
                    if (!S) {
                        S = true;
                        x = undefined;
                        s.mouseY = e.pageY;
                        s.mouseX = e.pageX
                    }
                    return false
                });
                s.mousemove(function(e) {
                    if (S) {
                        var t = e.pageX || e.clientX;
                        var n = e.pageY || e.clientY;
                        if (typeof x == "undefined") {
                            x = !!(x || Math.abs(n - s.mouseY) > Math.abs(t - s.mouseX))
                        }
                        if (x) {
                            S = false;
                            return
                        } else {
                            T = t - s.mouseX;
                            return false
                        }
                    }
                    return
                });
                s.mouseup(function(e) {
                    if (S) {
                        S = false;
                        if (T > r.touchSensitive) {
                            U()
                        } else if (T < -r.touchSensitive) {
                            R()
                        }
                        T = 0;
                        return false
                    }
                });
                s.mouseleave(function(e) {
                    s.mouseup()
                })
            }
        }

        function H() {
            if (w) {
                w.unbind("touchstart");
                w.unbind("touchmove");
                w.unbind("touchmove");
                w.css("left", 0);
                var t = 0,
                    n = w.parent().parent();
                e("a.md-thumb-item", w).each(function() {
                    if (e("img", e(this)).length > 0) {
                        if (e("img", e(this)).css("borderLeftWidth")) t += parseInt(e("img", e(this)).css("borderLeftWidth"), 10);
                        if (e("img", e(this)).css("borderRightWidth")) t += parseInt(e("img", e(this)).css("borderRightWidth"), 10);
                        if (e("img", e(this)).css("marginLeft")) t += parseInt(e("img", e(this)).css("marginLeft"), 10);
                        if (e("img", e(this)).css("marginRight")) t += parseInt(e("img", e(this)).css("marginRight"), 10)
                    } else {
                        if (e("span", e(this)).css("borderLeftWidth")) t += parseInt(e("span", e(this)).css("borderLeftWidth"), 10);
                        if (e("span", e(this)).css("borderRightWidth")) t += parseInt(e("span", e(this)).css("borderRightWidth"), 10);
                        if (e("span", e(this)).css("marginLeft")) t += parseInt(e("span", e(this)).css("marginLeft"), 10);
                        if (e("span", e(this)).css("marginRight")) t += parseInt(e("span", e(this)).css("marginRight"), 10)
                    }
                    if (e(this).css("borderLeftWidth")) t += parseInt(e(this).css("borderLeftWidth"), 10);
                    if (e(this).css("borderRightWidth")) t += parseInt(e(this).css("borderRightWidth"), 10);
                    if (e(this).css("marginLeft")) t += parseInt(e(this).css("marginLeft"), 10);
                    if (e(this).css("marginRight")) t += parseInt(e(this).css("marginRight"), 10);
                    t += parseInt(s.data("thumb-width"))
                });
                e(".md-thumb-next", n).remove();
                e(".md-thumb-prev", n).remove();
                if (t > e(".md-thumb-container", n).width()) {
                    E = e(".md-thumb-container", n).width() - t;
                    w.width(t);
                    n.append('<div class="md-thumb-prev"></div><div class="md-thumb-next"></div>');
                    e(".md-thumb-prev", n).click(function() {
                        B("right")
                    });
                    e(".md-thumb-next", n).click(function() {
                        B("left")
                    });
                    j();
                    if (v) {
                        N = true;
                        var i, o;
                        w.bind("touchstart", function(e) {
                            e = e.originalEvent.touches[0] || e.originalEvent.changedTouches[0];
                            i = true;
                            this.mouseX = e.pageX;
                            o = w.position().left;
                            return false
                        });
                        w.bind("touchmove", function(e) {
                            e.preventDefault();
                            e = e.originalEvent.touches[0] || e.originalEvent.changedTouches[0];
                            if (i) {
                                w.css("left", o + e.pageX - this.mouseX)
                            }
                            return false
                        });
                        w.bind("touchend", function(t) {
                            t.preventDefault();
                            t = t.originalEvent.touches[0] || t.originalEvent.changedTouches[0];
                            i = false;
                            if (Math.abs(t.pageX - this.mouseX) < r.touchSensitive) {
                                var n = e(t.target).closest("a.md-thumb-item");
                                if (n.length) {
                                    F(n.attr("rel"))
                                }
                                w.stop(true, true).animate({
                                    left: o
                                }, 400);
                                return false
                            }
                            if (w.position().left < E) {
                                w.stop(true, true).animate({
                                    left: E
                                }, 400, function() {
                                    j()
                                })
                            } else if (w.position().left > 0) {
                                w.stop(true, true).animate({
                                    left: 0
                                }, 400, function() {
                                    j()
                                })
                            }
                            o = 0;
                            return false
                        })
                    }
                }
            }
        }

        function B(t) {
            if (w) {
                if (t == "left") {
                    var n = w.position().left;
                    if (n > E) {
                        var r = e(".md-thumb-container", p).width();
                        if (n - r > E) {
                            w.stop(true, true).animate({
                                left: n - r
                            }, 400, function() {
                                j()
                            })
                        } else {
                            w.stop(true, true).animate({
                                left: E
                            }, 400, function() {
                                j()
                            })
                        }
                    }
                } else if (t == "right") {
                    var n = w.position().left;
                    if (n < 0) {
                        var r = e(".md-thumb-container", p).width();
                        if (n + r < 0) {
                            w.stop(true, true).animate({
                                left: n + r
                            }, 400, function() {
                                j()
                            })
                        } else {
                            w.stop(true, true).animate({
                                left: 0
                            }, 400, function() {
                                j()
                            })
                        }
                    }
                } else {
                    var i = e("a", w).index(e("a.md-current", w));
                    if (i >= 0) {
                        var n = w.position().left;
                        var s = i * e("a", w).width();
                        if (s + n < 0) {
                            w.stop(true, true).animate({
                                left: -s
                            }, 400, function() {
                                j()
                            })
                        } else {
                            var o = s + e("a", w).width();
                            var r = e(".md-thumb-container", p).width();
                            if (o + n > r) {
                                w.stop(true, true).animate({
                                    left: r - o
                                }, 400, function() {
                                    j()
                                })
                            }
                        }
                    }
                }
            }
        }

        function j() {
            var t = w.position().left;
            if (t > E) {
                e(".md-thumb-next", p).show()
            } else {
                e(".md-thumb-next", p).hide()
            }
            if (t < 0) {
                e(".md-thumb-prev", p).show()
            } else {
                e(".md-thumb-prev", p).hide()
            }
        }

        function F(t) {
            O = 0;
            C = o[t].data("timeout") ? o[t].data("timeout") : r.slideShowDelay;
            if (y) {
                var n = O * l / C;
                y.width(n);
                b.css({
                    left: n - 100 + "px"
                })
            }
            u = a;
            a = t;
            r.onStartTransition.call(s);
            if (o[u]) {
                e("div.md-bullet:eq(" + u + ")", g).removeClass("md-current");
                e("a:eq(" + u + ")", w).removeClass("md-current");
                W(o[u]);
                var i = r.transitions;
                if (r.transitions.toLowerCase() == "random") {
                    var f = new Array("slit-horizontal-left-top", "slit-horizontal-top-right", "slit-horizontal-bottom-up", "slit-vertical-down", "slit-vertical-up", "strip-up-right", "strip-up-left", "strip-down-right", "strip-down-left", "strip-left-up", "strip-left-down", "strip-right-up", "strip-right-down", "strip-right-left-up", "strip-right-left-down", "strip-up-down-right", "strip-up-down-left", "left-curtain", "right-curtain", "top-curtain", "bottom-curtain", "slide-in-right", "slide-in-left", "slide-in-up", "slide-in-down", "fade");
                    i = f[Math.floor(Math.random() * (f.length + 1))];
                    if (i == undefined) i = "fade";
                    i = e.trim(i.toLowerCase())
                }
                if (r.transitions.indexOf(",") != -1) {
                    var f = r.transitions.split(",");
                    i = f[Math.floor(Math.random() * f.length)];
                    if (i == undefined) i = "fade";
                    i = e.trim(i.toLowerCase())
                }
                if (o[a].data("transition")) {
                    var f = o[a].data("transition").split(",");
                    i = f[Math.floor(Math.random() * f.length)];
                    i = e.trim(i.toLowerCase())
                }
                if (!(this.support = Modernizr.csstransitions && Modernizr.csstransforms3d) && (i == "slit-horizontal-left-top" || i == "slit-horizontal-top-right" || i == "slit-horizontal-bottom-up" || i == "slit-vertical-down" || i == "slit-vertical-up")) {
                    i = "fade"
                }
                h = true;
                Y(i);
                if (g) e("div.md-bullet:eq(" + a + ")", g).addClass("md-current");
                if (w) e("a:eq(" + a + ")", w).addClass("md-current");
                B()
            } else {
                o[a].css({
                    top: 0,
                    left: 0
                }).show();
                X(o[t]);
                if (g) e("div.md-bullet:eq(" + a + ")", g).addClass("md-current");
                if (w) e("a:eq(" + a + ")", w).addClass("md-current");
                B();
                h = false
            }
        }

        function I() {
            F(0);
            A = setInterval(q, 40)
        }

        function q() {
            if (h) return false;
            if (k && !L) {
                O += 40;
                if (O > C) {
                    R()
                } else if (y) {
                    var e = O * l / C;
                    y.width(e);
                    b.css({
                        left: e - 100 + "px"
                    })
                }
            }
        }

        function R() {
            if (h) return false;
            var e = a;
            e++;
            if (e >= f && r.loop) {
                e = 0;
                F(e)
            } else if (e < f) {
                F(e)
            }
        }

        function U() {
            if (h) return false;
            var e = a;
            e--;
            if (e < 0 && r.loop) {
                e = f - 1;
                F(e)
            } else if (e >= 0) {
                F(e)
            }
        }

        function z(e) {
            var t = e.data("easeout") ? e.data("easeout") : "",
                r = !!window.ActiveXObject && +/msie\s(\d+)/i.exec(navigator.userAgent)[1] || NaN;
            if (r != NaN) r = 11;
            else r = parseInt(r);
            clearTimeout(e.data("timer-start"));
            if (t != "" && t != "keep" && r <= 9) e.fadeOut();
            else {
                e.removeClass(effectsIn.join(" "));
                if (t != "") {
                    if (t == "random") t = effectsOut[Math.floor(Math.random() * n)];
                    e.addClass(t)
                } else e.hide()
            }
        }

        function W(t) {
            t.find(".md-object").each(function() {
                var t = e(this);
                t.stop(true, true).hide();
                clearTimeout(t.data("timer-start"));
                clearTimeout(t.data("timer-stop"))
            })
        }

        function X(n) {
            e(".md-object", n).each(function(n) {
                var r = e(this);
                if (r.data("easeout")) r.removeClass(effectsOut.join(" "));
                var i = r.data("easein") ? r.data("easein") : "",
                    s = !!window.ActiveXObject && +/msie\s(\d+)/i.exec(navigator.userAgent)[1] || NaN;
                if (s != NaN) s = 11;
                else s = parseInt(s);
                if (i == "random") i = effectsIn[Math.floor(Math.random() * t)];
                r.removeClass(effectsIn.join(" "));
                r.hide();
                if (r.data("start") != undefined) {
                    r.data("timer-start", setTimeout(function() {
                        if (i != "" && s <= 9) r.fadeIn();
                        else r.show().addClass(i)
                    }, r.data("start")))
                } else r.show().addClass(i);
                if (r.data("stop") != undefined) {
                    r.data("timer-stop", setTimeout(function() {
                        z(r)
                    }, r.data("stop")))
                }
            })
        }

        function V() {
            r.onEndTransition.call(s);
            e(".md-strips-container", s).remove();
            o[u].hide();
            o[a].show();
            h = false;
            X(o[a])
        }

        function J(t, n) {
            var i, n = n ? n : r,
                u = e('<div class="md-strips-container"></div>'),
                f = Math.round(l / n.strips),
                h = Math.round(c / n.strips),
                p = e(".md-mainimg img", o[a]);
            if (p.length == 0) p = e(".md-mainimg", o[a]);
            for (var d = 0; d < n.strips; d++) {
                var v = t ? h * d + "px" : "0px",
                    m = t ? "0px" : f * d + "px",
                    g, y;
                if (d == n.strips - 1) {
                    g = t ? "0px" : l - f * d + "px", y = t ? c - h * d + "px" : "0px"
                } else {
                    g = t ? "0px" : f + "px", y = t ? h + "px" : "0px"
                }
                i = e('<div class="mdslider-strip"></div>').css({
                    width: g,
                    height: y,
                    top: v,
                    left: m,
                    opacity: 0
                }).append(p.clone().css({
                    marginLeft: t ? 0 : -(d * f) + "px",
                    marginTop: t ? -(d * h) + "px" : 0
                }));
                u.append(i)
            }
            s.append(u)
        }

        function K(t, n, r) {
            var i;
            var u = e('<div class="md-strips-container"></div>');
            var a = l / t,
                f = c / n,
                h = e(".md-mainimg img", o[r]);
            if (h.length == 0) h = e(".md-mainimg", o[r]);
            for (var p = 0; p < n; p++) {
                for (var d = 0; d < t; d++) {
                    var v = f * p + "px",
                        m = a * d + "px";
                    i = e('<div class="mdslider-tile"/>').css({
                        width: a,
                        height: f,
                        top: v,
                        left: m
                    }).append(h.clone().css({
                        marginLeft: "-" + m,
                        marginTop: "-" + v
                    }));
                    u.append(i)
                }
            }
            s.append(u)
        }

        function Q() {
            var t, n = [],
                r = e('<div class="md-strips-container"></div>');
            e(".md-mainimg img", o[u]), e(".md-mainimg img", o[a]);
            if (e(".md-mainimg img", o[u]).length > 0) n.push(e(".md-mainimg img", o[u]));
            else n.push(e(".md-mainimg", o[u]));
            if (e(".md-mainimg img", o[a]).length > 0) n.push(e(".md-mainimg img", o[a]));
            else n.push(e(".md-mainimg", o[a]));
            for (var i = 0; i < 2; i++) {
                t = e('<div class="mdslider-strip"></div>').css({
                    width: l,
                    height: c
                }).append(n[i].clone());
                r.append(t)
            }
            s.append(r)
        }

        function G(t) {
            var n = e('<div class="md-strips-container ' + t + '"></div>'),
                r = e(".md-mainimg img", o[u]).length > 0 ? e(".md-mainimg img", o[u]) : e(".md-mainimg", o[u]),
                i = e('<div class="mdslider-slit"/>').append(r.clone()),
                a = e('<div class="mdslider-slit"/>'),
                f = r.position();
            a.append(r.clone().css("top", f.top - c / 2 + "px"));
            if (t == "slit-vertical-down" || t == "slit-vertical-up") a = e('<div class="mdslider-slit"/>').append(r.clone().css("left", f.left - l / 2 + "px"));
            n.append(i).append(a);
            s.append(n)
        }

        function Y(t) {
            switch (t) {
                case "slit-horizontal-left-top":
                case "slit-horizontal-top-right":
                case "slit-horizontal-bottom-up":
                case "slit-vertical-down":
                case "slit-vertical-up":
                    G(t);
                    e(".md-object", o[a]).hide();
                    o[u].hide();
                    o[a].show();
                    var n = e(".mdslider-slit", s).first(),
                        i = e(".mdslider-slit", s).last();
                    var f = {
                        transition: "all " + r.transitionsSpeed + "ms ease-in-out",
                        "-webkit-transition": "all " + r.transitionsSpeed + "ms ease-in-out",
                        "-moz-transition": "all " + r.transitionsSpeed + "ms ease-in-out",
                        "-ms-transition": "all " + r.transitionsSpeed + "ms ease-in-out"
                    };
                    e(".mdslider-slit", s).css(f);
                    setTimeout(function() {
                        n.addClass("md-trans-elems-1");
                        i.addClass("md-trans-elems-2")
                    }, 50);
                    setTimeout(function() {
                        r.onEndTransition.call(s);
                        e(".md-strips-container", s).remove();
                        h = false;
                        X(o[a])
                    }, r.transitionsSpeed);
                    break;
                case "strip-up-right":
                case "strip-up-left":
                    K(r.stripCols, 1, a);
                    var p = e(".mdslider-tile", s),
                        d = r.transitionsSpeed / r.stripCols / 2,
                        v = r.transitionsSpeed / 2;
                    if (t == "strip-up-right") p = e(".mdslider-tile", s).reverse();
                    p.css({
                        height: "1px",
                        bottom: "0px",
                        top: "auto"
                    });
                    p.each(function(t) {
                        var n = e(this);
                        setTimeout(function() {
                            n.animate({
                                height: "100%",
                                opacity: "1.0"
                            }, v, "easeInOutQuart", function() {
                                if (t == r.stripCols - 1) V()
                            })
                        }, t * d)
                    });
                    break;
                case "strip-down-right":
                case "strip-down-left":
                    K(r.stripCols, 1, a);
                    var p = e(".mdslider-tile", s),
                        d = r.transitionsSpeed / r.stripCols / 2,
                        v = r.transitionsSpeed / 2;
                    if (t == "strip-down-right") p = e(".mdslider-tile", s).reverse();
                    p.css({
                        height: "1px",
                        top: "0px",
                        bottom: "auto"
                    });
                    p.each(function(t) {
                        var n = e(this);
                        setTimeout(function() {
                            n.animate({
                                height: "100%",
                                opacity: "1.0"
                            }, v, "easeInOutQuart", function() {
                                if (t == r.stripCols - 1) V()
                            })
                        }, t * d)
                    });
                    break;
                case "strip-left-up":
                case "strip-left-down":
                    K(1, r.stripRows, a);
                    var p = e(".mdslider-tile", s),
                        d = r.transitionsSpeed / r.stripRows / 2,
                        v = r.transitionsSpeed / 2;
                    if (t == "strip-left-up") p = e(".mdslider-tile", s).reverse();
                    p.css({
                        width: "1px",
                        left: "0px",
                        right: "auto"
                    });
                    p.each(function(t) {
                        var n = e(this);
                        setTimeout(function() {
                            n.animate({
                                width: "100%",
                                opacity: "1.0"
                            }, v, "easeInOutQuart", function() {
                                if (t == r.stripRows - 1) V()
                            })
                        }, t * d)
                    });
                    break;
                case "strip-right-up":
                case "strip-right-down":
                    K(1, r.stripRows, a);
                    var p = e(".mdslider-tile", s),
                        d = r.transitionsSpeed / r.stripRows / 2,
                        v = r.transitionsSpeed / 2;
                    if (t == "strip-left-right-up") p = e(".mdslider-tile", s).reverse();
                    p.css({
                        width: "1px",
                        left: "auto",
                        right: "1px"
                    });
                    p.each(function(t) {
                        var n = e(this);
                        setTimeout(function() {
                            n.animate({
                                width: "100%",
                                opacity: "1.0"
                            }, v, "easeInOutQuart", function() {
                                if (t == r.stripRows - 1) V()
                            })
                        }, t * d)
                    });
                    break;
                case "strip-right-left-up":
                case "strip-right-left-down":
                    K(1, r.stripRows, u);
                    o[u].hide();
                    o[a].show();
                    var p = e(".mdslider-tile", s),
                        d = r.transitionsSpeed / r.stripRows,
                        v = r.transitionsSpeed / 2;
                    if (t == "strip-right-left-up") p = e(".mdslider-tile", s).reverse();
                    p.filter(":odd").css({
                        width: "100%",
                        right: "0px",
                        left: "auto",
                        opacity: 1
                    }).end().filter(":even").css({
                        width: "100%",
                        right: "auto",
                        left: "0px",
                        opacity: 1
                    });
                    p.each(function(t) {
                        var n = e(this);
                        var i = t % 2 == 0 ? {
                            left: "-50%",
                            opacity: "0"
                        } : {
                            right: "-50%",
                            opacity: "0"
                        };
                        setTimeout(function() {
                            n.animate(i, v, "easeOutQuint", function() {
                                if (t == r.stripRows - 1) {
                                    r.onEndTransition.call(s);
                                    e(".md-strips-container", s).remove();
                                    h = false;
                                    X(o[a])
                                }
                            })
                        }, t * d)
                    });
                    break;
                case "strip-up-down-right":
                case "strip-up-down-left":
                    K(r.stripCols, 1, u);
                    o[u].hide();
                    o[a].show();
                    var p = e(".mdslider-tile", s),
                        d = r.transitionsSpeed / r.stripCols / 2,
                        v = r.transitionsSpeed / 2;
                    if (t == "strip-up-down-right") p = e(".mdslider-tile", s).reverse();
                    p.filter(":odd").css({
                        height: "100%",
                        bottom: "0px",
                        top: "auto",
                        opacity: 1
                    }).end().filter(":even").css({
                        height: "100%",
                        bottom: "auto",
                        top: "0px",
                        opacity: 1
                    });
                    p.each(function(t) {
                        var n = e(this);
                        var i = t % 2 == 0 ? {
                            top: "-50%",
                            opacity: 0
                        } : {
                            bottom: "-50%",
                            opacity: 0
                        };
                        setTimeout(function() {
                            n.animate(i, v, "easeOutQuint", function() {
                                if (t == r.stripCols - 1) {
                                    r.onEndTransition.call(s);
                                    e(".md-strips-container", s).remove();
                                    h = false;
                                    X(o[a])
                                }
                            })
                        }, t * d)
                    });
                    break;
                case "left-curtain":
                    K(r.stripCols, 1, a);
                    var p = e(".mdslider-tile", s),
                        m = l / r.stripCols,
                        d = r.transitionsSpeed / r.stripCols / 2;
                    p.each(function(t) {
                        var n = e(this);
                        n.css({
                            left: m * t,
                            width: 0,
                            opacity: 0
                        });
                        setTimeout(function() {
                            n.animate({
                                width: m,
                                opacity: "1.0"
                            }, r.transitionsSpeed / 2, function() {
                                if (t == r.stripCols - 1) V()
                            })
                        }, d * t)
                    });
                    break;
                case "right-curtain":
                    K(r.stripCols, 1, a);
                    var p = e(".mdslider-tile", s).reverse(),
                        m = l / r.stripCols,
                        d = r.transitionsSpeed / r.stripCols / 2;
                    p.each(function(t) {
                        var n = e(this);
                        n.css({
                            right: m * t,
                            left: "auto",
                            width: 0,
                            opacity: 0
                        });
                        setTimeout(function() {
                            n.animate({
                                width: m,
                                opacity: "1.0"
                            }, r.transitionsSpeed / 2, function() {
                                if (t == r.stripCols - 1) V()
                            })
                        }, d * t)
                    });
                    break;
                case "top-curtain":
                    K(1, r.stripRows, a);
                    var p = e(".mdslider-tile", s),
                        g = c / r.stripRows,
                        d = r.transitionsSpeed / r.stripRows / 2;
                    p.each(function(t) {
                        var n = e(this);
                        n.css({
                            top: g * t,
                            height: 0,
                            opacity: 0
                        });
                        setTimeout(function() {
                            n.animate({
                                height: g,
                                opacity: "1.0"
                            }, r.transitionsSpeed / 2, function() {
                                if (t == r.stripRows - 1) V()
                            })
                        }, d * t)
                    });
                    break;
                case "bottom-curtain":
                    K(1, r.stripRows, a);
                    var p = e(".mdslider-tile", s).reverse(),
                        g = c / r.stripRows,
                        d = r.transitionsSpeed / r.stripRows / 2;
                    p.each(function(t) {
                        var n = e(this);
                        n.css({
                            bottom: g * t,
                            height: 0,
                            opacity: 0
                        });
                        setTimeout(function() {
                            n.animate({
                                height: g,
                                opacity: "1.0"
                            }, r.transitionsSpeed / 2, function() {
                                if (t == r.stripRows - 1) V()
                            })
                        }, d * t)
                    });
                    break;
                case "slide-in-right":
                    var y = 0;
                    Q();
                    var p = e(".mdslider-strip", s);
                    p.each(function() {
                        w = e(this);
                        var t = y * l;
                        w.css({
                            left: t
                        });
                        w.animate({
                            left: t - l
                        }, r.transitionsSpeed, function() {
                            V()
                        });
                        y++
                    });
                    break;
                case "slide-in-left":
                    var y = 0;
                    Q();
                    var p = e(".mdslider-strip", s);
                    p.each(function() {
                        w = e(this);
                        var t = -y * l;
                        w.css({
                            left: t
                        });
                        w.animate({
                            left: l + t
                        }, r.transitionsSpeed * 2, function() {
                            V()
                        });
                        y++
                    });
                    break;
                case "slide-in-up":
                    var y = 0;
                    Q();
                    var p = e(".mdslider-strip", s);
                    p.each(function() {
                        w = e(this);
                        var t = y * c;
                        w.css({
                            top: t
                        });
                        w.animate({
                            top: t - c
                        }, r.transitionsSpeed, function() {
                            V()
                        });
                        y++
                    });
                    break;
                case "slide-in-down":
                    var y = 0;
                    Q();
                    var p = e(".mdslider-strip", s);
                    p.each(function() {
                        w = e(this);
                        var t = -y * c;
                        w.css({
                            top: t
                        });
                        w.animate({
                            top: c + t
                        }, r.transitionsSpeed, function() {
                            V()
                        });
                        y++
                    });
                    break;
                case "fade":
                default:
                    var b = {
                        strips: 1
                    };
                    J(false, b);
                    var w = e(".mdslider-strip:first", s);
                    w.css({
                        height: "100%",
                        width: l
                    });
                    if (t == "slide-in-right") w.css({
                        height: "100%",
                        width: l,
                        left: l + "px",
                        right: ""
                    });
                    else if (t == "slide-in-left") w.css({
                        left: "-" + l + "px"
                    });
                    w.animate({
                        left: "0px",
                        opacity: 1
                    }, r.transitionsSpeed, function() {
                        V()
                    });
                    break
            }
        }

        function Z(e) {
            var t = e.slice();
            var n = t.length;
            var r = n;
            while (r--) {
                var i = parseInt(Math.random() * n);
                var s = t[r];
                t[r] = t[i];
                t[i] = s
            }
            return t
        }

        function et() {
            return "ontouchstart" in window || "createTouch" in document
        }

        function tt() {
            p.width();
            l = r.responsive ? p.width() : r.width;
            if (r.responsive) {
                if (r.fullwidth && l > r.width) c = r.height;
                else c = Math.round(l / r.width * r.height)
            }
            if (!r.responsive && !r.fullwidth) p.width(l);
            if (!r.responsive && r.fullwidth) p.css({
                "min-width": l + "px"
            });
            if (r.fullwidth) {
                e(".md-objects", s).width(r.width);
                var t = 20;
                if ((p.width() - r.width) / 2 > 20) t = (p.width() - r.width) / 2;
                p.find(".md-bullets").css({
                    left: t,
                    right: t
                });
                p.find(".md-thumb").css({
                    left: t,
                    right: t
                })
            }
            if (r.responsive && r.fullwidth && p.width() < r.width) e(".md-objects", s).width(l);
            p.height(c);
            e(".md-slide-item", s).height(c);
            nt();
            H();
            ot();
            ut();
            at()
        }

        function nt() {
            e(".md-slide-item", s).each(function() {
                var t = e(".md-mainimg img", this);
                if (t.length == 1) {
                    if (t.data("defW") && t.data("defH")) {
                        var n = t.data("defW"),
                            r = t.data("defH");
                        st(t, n, r)
                    }
                } else e(".md-mainimg", e(this)).width(e(".md-slide-item:visible", s).width()).height(e(".md-slide-item:visible", s).height())
            })
        }

        function rt() {
            var t = e(".md-slide-item .md-mainimg img", s).length;
            s.data("count", t);
            if (s.data("count") == 0) it();
            e(".md-slide-item .md-mainimg img", s).each(function() {
                e(this).load(function() {
                    var t = e(this);
                    if (!t.data("defW")) {
                        var n = ft(t.attr("src"));
                        st(t, n.width, n.height);
                        t.data({
                            defW: n.width,
                            defH: n.height
                        })
                    }
                    s.data("count", s.data("count") - 1);
                    if (s.data("count") == 0) it()
                });
                if (this.complete) e(this).load()
            })
        }

        function it() {
            s.removeClass("loading-image");
            I()
        }

        function st(t, n, r) {
            var i = e(".md-slide-item:visible", s).width(),
                o = e(".md-slide-item:visible", s).height();
            if (r > 0 && o > 0) {
                if (n / r > i / o) {
                    var u = i - o / r * n;
                    t.css({
                        width: "auto",
                        height: o + "px"
                    });
                    if (u < 0) {
                        t.css({
                            left: u / 2 + "px",
                            top: 0
                        })
                    } else {
                        t.css({
                            left: 0,
                            top: 0
                        })
                    }
                } else {
                    var a = o - i / n * r;
                    t.css({
                        width: i + "px",
                        height: "auto"
                    });
                    if (a < 0) {
                        t.css({
                            top: a / 2 + "px",
                            left: 0
                        })
                    } else {
                        t.css({
                            left: 0,
                            top: 0
                        })
                    }
                }
            }
        }

        function ot() {
            var t = 1;
            if (parseInt(e.browser.version, 10) < 9) t = 6;
            if (p.width() < r.width) {
                e(".md-objects", s).css({
                    "font-size": p.width() / r.width * 100 - t + "%"
                })
            } else {
                e(".md-objects", s).css({
                    "font-size": 100 - t + "%"
                })
            }
        }

        function ut() {
            if (p.width() < r.width && r.responsive) {
                e(".md-objects div.md-object", s).each(function() {
                    var t = p.width() / r.width,
                        n = e(this),
                        i = [];
                    if (n.data("padding-top")) i["padding-top"] = n.data("padding-top") * t;
                    if (n.data("padding-right")) i["padding-right"] = n.data("padding-right") * t;
                    if (n.data("padding-bottom")) i["padding-bottom"] = n.data("padding-bottom") * t;
                    if (n.data("padding-left")) i["padding-left"] = n.data("padding-left") * t;
                    if (n.find("a").length) {
                        n.find("a").css(i)
                    } else {
                        n.css(i)
                    }
                })
            } else {
                e(".md-objects div.md-object", s).each(function() {
                    var t = e(this),
                        n = [];
                    if (t.data("padding-top")) n["padding-top"] = t.data("padding-top");
                    if (t.data("padding-right")) n["padding-right"] = t.data("padding-right");
                    if (t.data("padding-bottom")) n["padding-bottom"] = t.data("padding-bottom");
                    if (t.data("padding-left")) n["padding-left"] = t.data("padding-left");
                    if (t.find("a").length) {
                        t.find("a").css(n)
                    } else {
                        t.css(n)
                    }
                })
            }
        }

        function at() {
            if (r.showThumb && !r.showBullet) {
                thumbHeight = s.data("thumb-height");
                if (r.posThumb == "1") {
                    thumbBottom = thumbHeight / 2;
                    p.find(".md-thumb").css({
                        height: thumbHeight + 10,
                        bottom: -thumbBottom - 10
                    });
                    p.css({
                        "margin-bottom": thumbBottom + 10
                    })
                } else {
                    p.find(".md-thumb").css({
                        height: thumbHeight + 10,
                        bottom: -(thumbHeight + 40)
                    });
                    p.css({
                        "margin-bottom": thumbHeight + 50
                    })
                }
            }
        }

        function ft(e) {
            var t = new Image;
            t.src = e;
            var n = {
                height: t.height,
                width: t.width
            };
            return n
        }
        var i = {
            className: "md-slide-wrap",
            itemClassName: "md-slide-item",
            transitions: "strip-down-left",
            transitionsSpeed: 800,
            width: 990,
            height: 420,
            responsive: true,
            fullwidth: true,
            styleBorder: 0,
            styleShadow: 0,
            posBullet: 2,
            posThumb: 1,
            stripCols: 20,
            stripRows: 10,
            slideShowDelay: 6e3,
            slideShow: true,
            loop: false,
            pauseOnHover: false,
            showLoading: true,
            loadingPosition: "bottom",
            showArrow: true,
            showBullet: true,
            videoBox: false,
            showThumb: true,
            enableDrag: true,
            touchSensitive: 50,
            onEndTransition: function() {},
            onStartTransition: function() {}
        };
        r = e.extend({}, i, r);
        var s = e(this),
            o = [],
            u, a = -1,
            f = 0,
            l, c, h = true,
            p, d, v, m, g, y, b, w, E = 0,
            S = false,
            x, T, N = false,
            C = 0,
            k = false,
            L = false,
            A, O = 0;
        var M = {
            range: function(e, t, n) {
                var r = (new Array(++t - e)).join(".").split(".").map(function(t, n) {
                    return e + n
                });
                return n ? r.map(function(e) {
                    return [Math.random(), e]
                }).sort().map(function(e) {
                    return e[1]
                }) : r
            }
        };
        e(document).ready(function() {
            _()
        })
    };
    e.fn.reverse = [].reverse;
    var r = function(e, t, n) {
        this.m_pfnPercent = t;
        this.m_pfnFinished = n;
        this.m_nLoaded = 0;
        this.m_nProcessed = 0;
        this.m_aImages = new Array;
        this.m_nICount = e.length;
        for (var r = 0; r < e.length; r++) this.Preload(e[r])
    };
    r.prototype = {
        Preload: function(e) {
            var t = new Image;
            this.m_aImages.push(t);
            t.onload = r.prototype.OnLoad;
            t.onerror = r.prototype.OnError;
            t.onabort = r.prototype.OnAbort;
            t.oImagePreload = this;
            t.bLoaded = false;
            t.source = e;
            t.src = e
        },
        OnComplete: function() {
            this.m_nProcessed++;
            if (this.m_nProcessed == this.m_nICount) this.m_pfnFinished();
            else this.m_pfnPercent(Math.round(this.m_nProcessed / this.m_nICount * 10))
        },
        OnLoad: function() {
            this.bLoaded = true;
            this.oImagePreload.m_nLoaded++;
            this.oImagePreload.OnComplete()
        },
        OnError: function() {
            this.bError = true;
            this.oImagePreload.OnComplete()
        },
        OnAbort: function() {
            this.bAbort = true;
            this.oImagePreload.OnComplete()
        }
    };
    e.fn.mdvideobox = function(t) {
        e(this).each(function() {
            function n() {
                if (e("#md-overlay").length == 0) {
                    var t = e('<div id="md-overlay" class="md-overlay"></div>').hide().click(r);
                    var n = e('<div id="md-videocontainer" class="md-videocontainer"><div id="md-video-embed"></div><div class="md-description clearfix"><div class="md-caption"></div><a id="md-closebtn" class="md-closebtn" href="#"></a></div></div>');
                    n.css({
                        width: o.initialWidth + "px",
                        height: o.initialHeight + "px",
                        display: "none"
                    });
                    e("#md-closebtn", n).click(r);
                    e("body").append(t).append(n)
                }
                u = e("#md-overlay");
                a = e("#md-videocontainer");
                l = e("#md-video-embed", a);
                f = e(".md-caption", a);
                h.click(i)
            }

            function r() {
                u.fadeTo("fast", 0, function() {
                    e(this).css("display", "none")
                });
                l.html("");
                a.hide();
                return false
            }

            function i() {
                o.click.call();
                u.css({
                    height: e(window).height() + "px"
                });
                var t = e(window).height() / 2 - o.initialHeight / 2;
                var n = e(window).width() / 2 - o.initialWidth / 2;
                a.css({
                    top: t,
                    left: n
                }).show();
                l.css({
                    background: "#fff url(css/loading.gif) no-repeat center",
                    height: o.contentsHeight,
                    width: o.contentsWidth
                });
                u.css("display", "block").fadeTo("fast", o.defaultOverLayFade);
                f.html(d);
                l.fadeIn("slow", function() {
                    s()
                });
                return false
            }

            function s() {
                l.css("background", "#fff");
                c = '<iframe src="' + p + '" width="' + o.contentsWidth + '" height="' + o.contentsHeight + '" frameborder="0" webkitAllowFullScreen mozallowfullscreen allowFullScreen></iframe>';
                l.html(c)
            }
            var o = e.extend({
                initialWidth: 640,
                initialHeight: 400,
                contentsWidth: 640,
                contentsHeight: 350,
                defaultOverLayFade: .8,
                click: function() {}
            }, t);
            var u, a, f, l, c;
            var h = e(this);
            var p = h.attr("href");
            var d = h.attr("title");
            n()
        })
    }
})(jQuery)